import os

from ament_index_python import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.actions import GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.substitutions import TextSubstitution
from launch_ros.actions import Node
from launch_ros.actions import PushRosNamespace

def generate_launch_description():

    ld = LaunchDescription()

    description = os.path.join(
    get_package_share_directory('loki_description'),
    'urdf',
    'thorvald_model.xacro'
    )

    robot_name_launch_arg = DeclareLaunchArgument("robot_name", default_value=TextSubstitution(text=""))
    robot_model_launch_arg = DeclareLaunchArgument("robot_name", default_value=TextSubstitution(text="$(find-pkg-share loki_base)/config/robot_017.yaml"))
    tf_prefix_launch_arg = DeclareLaunchArgument("tf_prefix", default_value=TextSubstitution(text=""))
    model_extras_launch_arg = DeclareLaunchArgument("model_extras", default_value=TextSubstitution(text=""))
    datum_file_launch_arg = DeclareLaunchArgument("datum_file", default_value=TextSubstitution(text=""))

    robot_state_publisher_node = Node(
        package= 'robot_state_publisher',
        namespace= 'base_driver',
        executable= 'robot_state_publisher',
        name= 'robot_state_publisher',
        arguments= [description]
    )

    ld.add_action(robot_model_launch_arg)
    ld.add_action(robot_name_launch_arg)
    ld.add_action(tf_prefix_launch_arg)
    ld.add_action(model_extras_launch_arg)
    ld.add_action(datum_file_launch_arg)
    ld.add_action(robot_state_publisher_node)
    return ld

    