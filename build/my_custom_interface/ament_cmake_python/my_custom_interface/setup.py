from setuptools import find_packages
from setuptools import setup

setup(
    name='my_custom_interface',
    version='0.0.0',
    packages=find_packages(
        include=('my_custom_interface', 'my_custom_interface.*')),
)
