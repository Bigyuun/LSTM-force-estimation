import rclpy
from rclpy.node import Node

from rclpy.qos import QoSProfile
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSReliabilityPolicy

from rclpy.parameter import Parameter
from rcl_interfaces.msg import SetParametersResult

from std_msgs.msg import Float32MultiArray
from std_msgs.msg import Header
from std_msgs.msg import Bool
from geometry_msgs.msg import Vector3
from geometry_msgs.msg import WrenchStamped
from std_srvs.srv import SetBool
from custom_interfaces.msg import LoadcellState
from custom_interfaces.msg import DataFilterSetting

from rclpy.executors import MultiThreadedExecutor

import numpy as np
import tensorflow as tf
from sklearn.preprocessing import MinMaxScaler
import joblib
import pandas as pd
from glob import glob
import datetime

import threading

class ExternalForceEstimationNode(Node):
  
  def __init__(self):
    self.model = tf.keras.models.load_model('fit/20240807-185538/lstm_model.h5')
    # 스케일러 불러오기
    self.scaler_X = joblib.load('fit/20240807-185538/scaler_X.pkl')
    self.scaler_y = joblib.load('fit/20240807-185538/scaler_y.pkl')

    super().__init__('external_force_estimation_node')
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

    self.fts_data_flag = False
    self.fts_data = WrenchStamped()
    self.fts_subscriber = self.create_subscription(
        WrenchStamped,
        'fts_data',
        self.read_fts_data,
        QOS_RKL1V
    )
    self.fts_data_offset = WrenchStamped()
    self.fts_offset_subscriber = self.create_subscription(
        WrenchStamped,
        'fts_data_offset',
        self.read_fts_data_offset,
        QOS_RKL1V
    )
    self.get_logger().info('fts_data subscriber is created.')

    self.loadcell_data_flag = False
    self.loadcell_data = LoadcellState()
    self.lc_subscriber = self.create_subscription(
        LoadcellState,
        'loadcell_state',
        self.read_loadcell_data,
        QOS_RKL1V
    )
    self.loadcell_data_offset = LoadcellState()
    self.lc_offset_subscriber = self.create_subscription(
        LoadcellState,
        'loadcell_state_offset',
        self.read_loadcell_data_offset,
        QOS_RKL1V
    )
    self.get_logger().info('loadcell_data subscriber is created.')

    self.get_logger().info('motor_state subscriber is created.')
    
    self.wire_length_flag = False
    self.wire_length = Float32MultiArray()
    self.wire_length_subscriber = self.create_subscription(
        Float32MultiArray,
        'wire_length',
        self.read_wire_length,
        QOS_RKL1V
    )
    self.get_logger().info('wire_length subscriber is created.')

    self.segment_angle_subscriber = self.create_subscription(
        Float32MultiArray,
        "segment_angle",
        self.segment_angle_callback,
        QOS_RKL1V)

    self.external_force_publisher = self.create_publisher(
      Vector3,
      'estimation_external_force',
      QOS_RKL1V
    )

    self.estimatiion_thread = threading.Thread(target=self.estimation_process)
    self.estimatiion_thread.start()

  def read_fts_data(self, msg):
      self.fts_data_flag = True
      self.fts_data = msg
  def read_fts_data_offset(self, msg):
      self.fts_data_offset = msg

  def read_loadcell_data(self, msg):
      self.loadcell_data_flag = True
      self.loadcell_data = msg
  def read_loadcell_data_offset(self, msg):
      self.loadcell_data_offset = msg
  def read_wire_length(self, msg):
      self.wire_length_flag = True
      self.wire_length = msg

  def segment_angle_callback(self, msg):
    self.segment_angle = msg.data

  def estimation_process(self, data):
    """
    TODO
    LSTM force estimation code update...
    """
    while rclpy.ok():
      try:
        wl = self.wire_length
        lc = self.loadcell_data
        segment_angle = self.segment_angle

        input = np.array([ wl + lc + segment_angle])
        predicted_normalized = self.model()
      finally:
         pass
    pass

"""
"""

def main(args=None):
  rclpy.init(args=args)
  try:
    estimator = ExternalForceEstimationNode()
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

