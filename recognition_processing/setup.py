from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'recognition_processing'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mimi_orin',
    maintainer_email='c1103809@planet.kanazawa-it.ac.jp',
    description='Estimate the 3D position of an object',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [    
            #'recognition_opencv_publisher = recognition_processing.recognition_opencv_publisher:main'
            'recognition_tools = recognition_processing.recognition_tools:main',
            'recog_action_server = recognition_processing.recog_action_server:main' 
        ],
    },
)
