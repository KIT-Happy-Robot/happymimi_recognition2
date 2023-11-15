from setuptools import find_packages, setup

package_name = 'three_dimensional_data_processing'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tk',
    maintainer_email='takuchanpp@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'position_estimator_dev = three_dimensional_data_processing.position_estimation_dev:main',
            'position_estimator = three_dimensional_data_processing.position_estimator:main'
        ],
    },
)
