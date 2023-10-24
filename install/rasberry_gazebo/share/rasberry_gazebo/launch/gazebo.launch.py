from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node

def generate_launch_description():

    world_file = PathJoinSubstitution(
        [FindPackageShare("rasberry_gazebo"),
        "worlds",
        "clearpath_playpen.world"]
    )

    gz_launch = PathJoinSubstitution(
        [FindPackageShare("rasberry_gazebo"),
        "launch",
        "thorvald_playpen.launch.py"]
    )

    gazebo_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([gz_launch]),
        launch_arguments={'world_path' : world_file}.items()
    )

    ld = LaunchDescription()
    ld.add_action(gazebo_sim)

    return ld