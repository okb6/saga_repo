from setuptools import find_packages
from setuptools import setup

setup(
    name='diagnostic_msgs',
    version='5.2.0',
    packages=find_packages(
        include=('diagnostic_msgs', 'diagnostic_msgs.*')),
)
