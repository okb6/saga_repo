from setuptools import find_packages
from setuptools import setup

setup(
    name='loki_msgs',
    version='2.0.0',
    packages=find_packages(
        include=('loki_msgs', 'loki_msgs.*')),
)
