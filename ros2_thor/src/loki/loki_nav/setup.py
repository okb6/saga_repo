from setuptools import setup
import os
from glob import glob


package_name = 'loki_nav'
package_version = '2.0.0'

setup(
    name=package_name,
    version=package_version,
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.yaml'))),     
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.mvc'))),     
    ],
    install_requires=[
        'setuptools',
        'septentrio_gnss_driver'
        'ament_python',
        'actionlib_msgs',
        'geometry_msgs',
        'rclpy',
        'sensor_msgs',
        'std_msgs',
        'std_srvs',
        'twist_mux'
    ],
    zip_safe=True,
    author='Owen Bates',
    author_email='okb6@cornell.edu',
    maintainer='Owen Bates',
    maintainer_email='okb6@cornell.edu',
    description='This package converts joy messages into velocity commands for the Thorvald robotic platform',
    license='Apache version 2.0',
    entry_points={
        'console_scripts': [
            'waypoint_node = loki_nav.waypoint_node:main',
            'converter_node = loki_nav.converter_node:main',
            'logged_waypoint_follower = loki_nav.logged_waypoint_follower:main',
            'interactive_waypoint_follower = loki_nav.interactive_waypoint_follower:main',
            'gps_waypoint_logger = loki_nav.gps_waypoint_logger:main',
            'tf_broadcaster = loki_nav.tf_broadcaster:main',
        ],
    },
    include_package_data=True
)
