import launch
import launch.actions
import launch.substitutions
import launch_ros.actions
import os
from ament_index_python.packages import get_package_share_directory

gps_wpf_dir = get_package_share_directory("loki_nav")
mapviz_config_file = os.path.join(gps_wpf_dir, "config", "mapviz.mvc")


def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package="mapviz",
            # namespace="Loki",
            executable="mapviz",
            name="mapviz",
            parameters=[{"config": mapviz_config_file}]
        ),
        launch_ros.actions.Node(
            package="swri_transform_util",
            executable="initialize_origin.py",
            name="initialize_origin",
            # namespace="Loki",
            remappings=[
                ("fix", "gps/fix"),

            ],
        ),
        launch_ros.actions.Node(
            package="tf2_ros",
            # namespace="Loki",
            executable="static_transform_publisher",
            name="swri_transform",
            arguments=["0", "0", "0", "0", "0", "0", "map", "origin"]
        )
    ])