from setuptools import find_packages
from setuptools import setup

setup(
    name='std_srvs',
    version='5.2.0',
    packages=find_packages(
        include=('std_srvs', 'std_srvs.*')),
)
