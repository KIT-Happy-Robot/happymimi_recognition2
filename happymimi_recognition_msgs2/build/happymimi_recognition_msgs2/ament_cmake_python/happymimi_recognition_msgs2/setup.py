from setuptools import find_packages
from setuptools import setup

setup(
    name='happymimi_recognition_msgs2',
    version='0.0.0',
    packages=find_packages(
        include=('happymimi_recognition_msgs2', 'happymimi_recognition_msgs2.*')),
)
