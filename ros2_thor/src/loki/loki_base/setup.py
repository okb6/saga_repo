from setuptools import setup
import os
from glob import glob


package_name = 'loki_base'

setup(
    name=package_name,
    version='2.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.yaml'))),      

    ],
    install_requires=[
        'setuptools',
        'rosdep',
        'ament_python',
        'std_msgs',
        'sensor_msgs',
        'std_srvs',
        'rclpy',
        'nav_msgs',
        'angles',
        'control_msgs',
        'diagnostic_msgs',
        'geometry_msgs',
        'rosidl_default_generators',
        'tf2',
        'loki_can_devices',
        'loki_msgs',
        'loki_description'
        'ctypes'

        # Add any additional Python dependencies here
    ],
    zip_safe=True,
    author='Owen Bates',
    author_email='okb6@cornell.edu',
    maintainer='Owen Bates',
    maintainer_email='okb6@cornell.edu',
    description='loki_base',
    license='Apache License, Version 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'base_driver = loki_base.base_driver:main',
            'enlcosure_board_serial = loki_base.enclosure_board_serial:main',
            'isaac_wheels = loki_base.isaac_wheels:main'
        ],
    },
    include_package_data=True
)
