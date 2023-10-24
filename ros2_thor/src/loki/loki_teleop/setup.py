from setuptools import setup
import os
from glob import glob


package_name = 'loki_teleop'
package_version = '2.0.0'

setup(
    name=package_name,
    version=package_version,
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch'))),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('config', '*.config')))
    ],
    install_requires=[
        'setuptools',
        'ament_python',
        'actionlib_msgs',
        'geometry_msgs',
        'joy',
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
            'teleop_node = loki_teleop.teleop_node:main',
        ],
    },
    include_package_data=True
)
