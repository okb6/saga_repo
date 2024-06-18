import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument
from launch.substitutions import TextSubstitution, LaunchConfiguration

def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('loki_base'),
        'config',
        'robot_017.yaml'
    )

    can_name_launch_arg = DeclareLaunchArgument("can_interface_name", default_value=TextSubstitution(text="can0"))    
    can_type_launch_arg = DeclareLaunchArgument("can_interface_type", default_value=TextSubstitution(text="socketcan"))

    pycppnode = Node(
        package="loki_can_devices",
        executable="pytocpp",
        remappings=[('cmd_vel', 'twist_mux/cmd_vel'),
                    ('joint_states', "base_driver/joint_states")],
        name="py_to_cpp",
        parameters=[
            {"can_interface_name": LaunchConfiguration("can_interface_name"),
            "can_interface_type": LaunchConfiguration("can_interface_type")
            },
            config
            ],
        output = 'screen'
    )

    ld.add_action(pycppnode)
    return ld