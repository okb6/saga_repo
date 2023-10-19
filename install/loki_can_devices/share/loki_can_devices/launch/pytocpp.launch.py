import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('loki_base'),
        'config',
        'robot_017.yaml'
    )

    pycppnode = Node(
        package="loki_can_devices",
        executable="pytocpp",
        remappings=[('cmd_vel', 'twist_mux/cmd_vel'),
                    ('joint_states', "base_driver/joint_states")],
        name="py_to_cpp",
        parameters= [config],
        output = 'screen'
    )

    ld.add_action(pycppnode)
    return ld