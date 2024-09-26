#!/usr/bin/env python3
# Copyright 2021 OROCA
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import ExecuteProcess
from launch.substitutions import LaunchConfiguration, Command, ThisLaunchFileDir
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch_ros.substitutions import FindPackageShare
import os
from launch_ros.descriptions import ParameterValue

def generate_launch_description():

    estimation_pkg_dir = get_package_share_directory('estimation_pkg')
    print(f'estimation_pkg_dir={estimation_pkg_dir}')
    rqt_perspective_file_path = os.path.join(estimation_pkg_dir, 'rqt_setting.perspective')
    print(f'rqt_perspective_file_path={rqt_perspective_file_path}')
    rqt_command = ['rqt', '-p', rqt_perspective_file_path]

    return LaunchDescription([
        # ExecuteProcess(
        #     cmd=rqt_command,
        #     output='screen'
        # ),

        Node(
            package='rqt_gui',
            executable='rqt_gui',
            name='rqt_gui',
            arguments=['--perspective-file', rqt_perspective_file_path],
            output='screen'
        ),

        Node(
            package='estimation_pkg',
            executable='segment_angle_estimator',
            name='segment_angle_estimator',
            output='screen',
            #prefix='taskset -c 2 3'
        ),
        Node(
            package='estimation_pkg',
            executable='external_force_estimator',
            name='external_force_estimator',
            output='screen',
            parameters=[
                {'model_path': 'model/lstm_model.h5'},
                {'scaler_x_path': 'model/scaler_x.pkl'},
                {'scaler_y_path': 'model/scaler_y.pkl'},
            ]
            #prefix='taskset -c 2 3'
        )
    ])
