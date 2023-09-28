from setuptools import find_packages
from setuptools import setup

setup(
    name='trajectory_msgs',
    version='5.2.0',
    packages=find_packages(
        include=('trajectory_msgs', 'trajectory_msgs.*')),
)
