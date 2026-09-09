
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time')
    gate_service = LaunchConfiguration('gate_service')
    launch_simulation = LaunchConfiguration('launch_simulation')

    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use the /clock published by Gazebo. Keep this true.')

    declare_gate_service = DeclareLaunchArgument(
        'gate_service',
        default_value='toggle_walls_1_2',
        description='SetBool service that moves the red gates.')

    declare_launch_simulation = DeclareLaunchArgument(
        'launch_simulation',
        default_value='true',
        description='Start the maze too. Set false to attach to a running one.')

    linear_pid = Node(
        package='pid_turtlebot',
        executable='linear_pid',
        name='linear_pid',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}])

    yaw_pid_server = Node(
        package='pid_turtlebot',
        executable='yaw_pid_server',
        name='yaw_pid_server',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}])

    solve_maze = Node(
        package='pid_turtlebot',
        executable='solve_maze',
        name='solve_maze',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'gate_service': gate_service,
        }])
  
   
    return LaunchDescription([
        declare_use_sim_time,
        declare_gate_service,
        declare_launch_simulation,
        linear_pid,
        yaw_pid_server,
        solve_maze,
    ])
