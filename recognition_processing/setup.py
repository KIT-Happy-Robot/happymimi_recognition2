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
    maintainer='mimi',
    maintainer_email='',
    description='三次元位置推定のプログラムや挙手判定のプログラム等。雑多なプログラムをまとめたパッケージ',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [    
            'hand_raise_recognition = recognition_processing.hand_raise_recognition.hand_raise_recognition:main'
        ],
    },
)
