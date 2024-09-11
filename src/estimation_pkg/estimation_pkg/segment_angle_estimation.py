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
from postprocess import RBSC

import threading

class SegmentEstimationNode(Node):
  def __init__(self):
    self.current_frame = None
    self.rbsc = RBSC()
    self.segment_angle = None

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
    self.color_image_rect_raw_subscriber = self.create_subscription(
        Image,
        "/camera/camera/color/image_raw",
        # "camera/color/image_rect_raw",
        self.color_image_rect_raw_callback,
        QOS_RKL1V)
    self.get_logger().info('realsense-camera subscriber is created.')

    self.segment_angle_publisher = self.create_publisher(
       Float32MultiArray,
       "segment_angle",
       QOS_RKL10V
    )

    self.segment_estimation_thread = threading.Thread(target=self.process)
    self.segment_estimation_thread.start()

  def color_image_rect_raw_callback(self, data):
    self.capture_time = data.header.stamp
    self.current_frame = self.br_rgb.imgmsg_to_cv2(data, 'bgr8')

  def process(self):
    while rclpy.ok():
      if self.current_frame:
        self.rbsc.postprocess(self.current_frame)
        self.joint_angle = self.rbsc.joint_angle  # radian
        msg = Float32MultiArray()
        msg.data = self.joint_angle.tolist()
        self.segment_angle_publisher.publish(msg)
        print(f'pub data(joint_angle) : {msg.data}')

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

