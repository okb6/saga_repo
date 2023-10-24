from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, RegisterEventHandler, TimerAction
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory

from pathlib import Path

ARGUMENTS = [
    #Get values from multi_husky_playpen.launch
    DeclareLaunchArgument('robot_name', default_value='h0'),
    DeclareLaunchArgument('tfpre', default_value='h0'),
    DeclareLaunchArgument('x', default_value='0.0'),
    DeclareLaunchArgument('y', default_value='0.0'),
    DeclareLaunchArgument('z', default_value='0.0'),
    DeclareLaunchArgument('yaw', default_value='0.0'),
]


def generate_launch_description():

    robot_name = LaunchConfiguration('robot_name')
    tfpre = LaunchConfiguration('tfpre')
    X = LaunchConfiguration('x')
    Y = LaunchConfiguration('y')
    Yaw = LaunchConfiguration('yaw')
    Z = LaunchConfiguration('z')

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare("loki_description"), "urdf", "thorvald_model.urdf.xacro"]
            ),
            " ",
            "name:=",
            robot_name,
            " ",
            "prefix:=",
            tfpre,
            " ",
            "is_sim:=true",
            " ",
            "gazebo_controllers:=",
        ]
    )
    # robot_description = {"robot_description": robot_description_content}



    # node_robot_state_publisher = Node(
    #     package="robot_state_publisher",
    #     namespace=tfpre,
    #     executable="robot_state_publisher",
    #     output="screen",
    #     parameters=[{'use_sim_time': True}, robot_description],
    # )


    # Spawn robot
    spawn_robot = Node(
        package='gazebo_ros',
        namespace=tfpre,
        executable='spawn_entity.py',
        name=robot_name,
        arguments=['-entity',
                    robot_name,
                   '-topic',
                   'robot_description',
                    '-x',
                    X,
                    '-y',
                    Y,
                    '-z',
                    Z,],
        output='screen',
    )

    print("world")
    ld = LaunchDescription(ARGUMENTS)
    # ld.add_action(node_robot_state_publisher)
    # ld.add_action(spawn_joint_state_broadcaster)
    # ld.add_action(diffdrive_controller_spawn_callback)
    ld.add_action(spawn_robot)
    print("boi")

    return ld