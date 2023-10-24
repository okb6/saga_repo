from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription, SetEnvironmentVariable, RegisterEventHandler, TimerAction
from launch.substitutions import EnvironmentVariable, LaunchConfiguration, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
from launch.event_handlers import OnProcessExit
from pathlib import Path

ARGUMENTS = [
    DeclareLaunchArgument('world_path', default_value='',
                          description='The world path, by default is empty.world'),
    
    DeclareLaunchArgument(
        'laser_enabled',
        default_value='false',
        description='sets laser enabled variable'
    ),

    DeclareLaunchArgument(
        'kinect_enabled',
        default_value='false',
        description='sets kinect enabled variable'
    ),

    DeclareLaunchArgument(
        'multimaster',
        default_value='false',
        description='sets multimaster variable'
    ),
]


def generate_launch_description():

    #LAUNCH GAZEBO SERVER/CLIENT

    gz_resource_path = SetEnvironmentVariable(name='GAZEBO_MODEL_PATH', value=[
                                                EnvironmentVariable('GAZEBO_MODEL_PATH',
                                                                    default_value=''),
                                                '/usr/share/gazebo-11/models/:',
                                                str(Path(get_package_share_directory('loki_description')).
                                                    parent.resolve())])

    # Launch args
    world_path = LaunchConfiguration('world_path')
    laser_enabled = LaunchConfiguration('laser_enabled')
    kinect_enabled = LaunchConfiguration('kinect_enabled')
    multimaster = LaunchConfiguration('multimaster')

    # Gazebo server
    gzserver = ExecuteProcess(
        cmd=['gzserver',
             '-s', 'libgazebo_ros_init.so',
             '-s', 'libgazebo_ros_factory.so',
             world_path],
        output='screen',
    )

    # Gazebo client
    gzclient = ExecuteProcess(
        cmd=['gzclient'],
        output='screen',
        # condition=IfCondition(LaunchConfiguration('gui')),
    )

    #LAUNCH MULTI ROBOT
    robot_spawner = PathJoinSubstitution(
        [FindPackageShare("rasberry_gazebo"),
        "launch",
        "spawn_thorvald.launch.py"],
    )

    spawn_h0 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([robot_spawner]),
        launch_arguments={
            'robot_name': 'h0',
            'tfpre': 'h0',
            'x': '0.0',
            'y': '0.0',
            'yaw': '0.0',
            'laser_enabled': laser_enabled,
            'kinect_enabled': kinect_enabled
        }.items(),
    )


    ld = LaunchDescription(ARGUMENTS)
    ld.add_action(gz_resource_path)
    ld.add_action(gzserver)
    ld.add_action(gzclient)
    ld.add_action(spawn_h0)
    return ld