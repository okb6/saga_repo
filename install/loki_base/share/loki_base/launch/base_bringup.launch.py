import os 

from ament_index_python import get_package_share_directory

from launch import LaunchDescription
from launch.substitutions import TextSubstitution, LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('loki_base'),
        'config',
        'robot_017.yaml'
    )

    robot_mode_launch_arg = DeclareLaunchArgument("robot_model", default_value=TextSubstitution(text=""))
    simple_sim_launch_arg = DeclareLaunchArgument("simple_sim", default_value=TextSubstitution(text="false"))    
    enable_odom_launch_arg = DeclareLaunchArgument("enable_odom_tf", default_value=TextSubstitution(text="true"))    
    odom_frame_launch_arg = DeclareLaunchArgument("odom_frame_id", default_value=TextSubstitution(text="odom"))    
    can_name_launch_arg = DeclareLaunchArgument("can_interface_name", default_value=TextSubstitution(text=""))    
    can_type_launch_arg = DeclareLaunchArgument("can_interface_type", default_value=TextSubstitution(text=""))
    joint_states_launch_arg = DeclareLaunchArgument("joint_states_remap_to", default_value=TextSubstitution(text=""))

    robot_model_launch_value= LaunchConfiguration("robot_model")
    simple_sim_launch_value= LaunchConfiguration("simple_sim")
    enable_odom_tf_launch_value= LaunchConfiguration("enable_odom_tf")
    can_name_launch_value= LaunchConfiguration("can_interface_name")
    can_type_launch_value= LaunchConfiguration("can_interface_type")
    odom_frame_launch_value= LaunchConfiguration("odom_frame_id")
    joint_states_launch_value= LaunchConfiguration("joint_states_remap_to")


    basedriver = Node(
    package="loki_base",
    namespace="",
    executable="base_driver",
    name="base_driver",
    remappings=[('cmd_vel', 'twist_mux/cmd_vel'),
                ('joint_states', joint_states_launch_value)],
    parameters=[
        robot_model_launch_value,
        simple_sim_launch_value,
        enable_odom_tf_launch_value,
        can_name_launch_value,
        can_type_launch_value,
        odom_frame_launch_value,
        # config
        ],
    )

    ld.add_action(robot_mode_launch_arg)
    ld.add_action(simple_sim_launch_arg)
    ld.add_action(enable_odom_launch_arg)
    ld.add_action(odom_frame_launch_arg)
    ld.add_action(can_type_launch_arg)
    ld.add_action(can_name_launch_arg)
    ld.add_action(joint_states_launch_arg)
    ld.add_action(basedriver)
    return ld