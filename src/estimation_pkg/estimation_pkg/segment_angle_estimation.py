import rclpy
from rclpy.node import Node

from rclpy.qos import QoSProfile
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSReliabilityPolicy

from std_msgs.msg import Float32MultiArray

from rclpy.executors import MultiThreadedExecutor
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

from estimation_pkg.postprocess import RBSC
# from postprocess import RBSC

import threading
import os
import numpy as np
import cv2

print(f"[segment] Current Working Directory : {os.getcwd()}")

class SegmentEstimationNode(Node):
  def __init__(self):
    self.current_frame = None
    self.rbsc = RBSC()
    self.segment_angle = None
    # self.joint_angle = np.array(0)

    super().__init__('segment_estimation_node')
    self.declare_parameter('qos_depth', 1)
    qos_depth = self.get_parameter('qos_depth').value
    QOS_RKL1V = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=qos_depth,
            durability=QoSDurabilityPolicy.VOLATILE
    )
    QOS_RKL10V = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10,
            durability=QoSDurabilityPolicy.VOLATILE
    )

    # self.realsense_subscriber = RealSenseSubscriber()
    # color rectified image. RGB format
    self.br_rgb = CvBridge()
    self.current_frame_flag = False
    self.color_image_rect_raw_subscriber = self.create_subscription(
        Image,
        "/camera/camera/color/image_raw",
        # "camera/camera/color/image_rect_raw",
        self.color_image_rect_raw_callback,
        QOS_RKL1V)
    self.get_logger().info('realsense-camera subscriber is created.')

    self.segment_angle_publisher = self.create_publisher(
       Float32MultiArray,
       "segment_angle",
       QOS_RKL10V
    )

    self.segment_estimation_thread = threading.Thread(target=self.process)
    self.plot_show_thread = threading.Thread(target=self.plot_show)
    self.event = threading.Event()

    self.segment_estimation_thread.start()
    self.plot_show_thread.start()

  def color_image_rect_raw_callback(self, data):
    self.current_frame_flag = True
    self.capture_time = data.header.stamp
    self.current_frame = self.br_rgb.imgmsg_to_cv2(data, 'bgr8')

  def process(self):
    while rclpy.ok():
      if self.current_frame_flag:
        suc = self.rbsc.postprocess(self.current_frame)
        if suc == None:
          continue
        self.joint_angle = self.rbsc.joint_angle  # radian
        msg = Float32MultiArray()
        msg.data = self.joint_angle.tolist()
        self.segment_angle_publisher.publish(msg)

        self.event.set()
        # print(f'pub data(joint_angle) : {msg.data}')
      # else:
      #   print(f'frame does not update - flag:{self.current_frame_flag}')
  
  def plot_show(self):
    self.get_logger().info('Waiting the first curvefit process...')
    self.event.wait()
    self.get_logger().info('finish curvefit process')

    # Drawing multiple arrows on the image using a loop
    def draw_arrows(image, pixel_yx, u, v):
      for i in range(len(u)):
          start_point = (int(pixel_yx[i, 1]), int(pixel_yx[i, 0]))  # yx needs to be flipped for cv2
          end_point = (int(start_point[0] + u[i]), int(start_point[1] + v[i]))  # u and v provide direction
          
          # Draw the arrow line for each point
          cv2.arrowedLine(image, start_point, end_point, (255, 0, 0), 2, tipLength=0.3)

    while rclpy.ok():
      if self.current_frame_flag:
        try:
          # Compute arrow vectors
          frame = self.current_frame
          rads = self.rbsc.joint_angle + np.pi/2
          arrow_length = 15
          u = np.cos(rads) * arrow_length
          v = np.sin(rads) * arrow_length
          v = -v  # Reverse v to match the original behavior

          # Draw joint points and arrows
          pixel_yx = np.flip(self.rbsc.joint_yx_pixel, axis=0)
          for point in pixel_yx:
            cv2.circle(frame, (int(point[1]), int(point[0])), 2, (0, 0, 255), -1)  # Red dots for joints

          # Draw the arrows
          draw_arrows(frame, pixel_yx, u, v)
        except Exception as e:
          self.get_logger().info(f'plot_show() Error : {e}')

        finally:
          # Display the frame in a window
          cv2.imshow('Real-time Grayscale Image with Joint Points and Arrows', frame)

          if cv2.waitKey(1) & 0xFF == ord('q'):
            continue
    
    # Cleanup
    cv2.destroyAllWindows()


def main(args=None):
  rclpy.init(args=args)
  try:
    estimator = SegmentEstimationNode()
    executor = MultiThreadedExecutor()
    #  executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(estimator)
    try:
      executor.spin()
    except KeyboardInterrupt:
      estimator.get_logger().warning('Keyboard Interrupt (SIGINT)')
    finally:
      executor.shutdown()
      estimator.destroy_node()
  finally:
     rclpy.shutdown()

if __name__ == '__main__':
  main()

