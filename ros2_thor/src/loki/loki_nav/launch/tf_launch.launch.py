from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='loki_nav',
            executable='tf_broadcaster',
            name='broadcaster1',
        ),
    ])