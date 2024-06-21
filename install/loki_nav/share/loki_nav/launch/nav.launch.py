import os 

from ament_index_python import get_package_share_directory

from launch import LaunchDescription
from launch.substitutions import TextSubstitution, LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('loki_nav'),
        'config',
        'nav.yaml'
    )

    navdriver = Node(
        package="loki_nav",
        namespace="",
        executable="waypoint_node",
        name="waypoint_node",
        # remappings=[('nav_vel', 'twist_mux/nav_vel')],
        parameters=[config],
        output = 'screen'

    )



    ld.add_action(navdriver)
    return ld