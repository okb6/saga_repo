from setuptools import find_packages
from setuptools import setup

setup(
    name='std_msgs',
    version='5.2.0',
    packages=find_packages(
        include=('std_msgs', 'std_msgs.*')),
)
