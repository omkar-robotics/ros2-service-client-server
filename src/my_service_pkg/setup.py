from setuptools import setup

package_name = 'my_service_pkg'

setup(
    name=package_name,
    version='0.0.0',

    packages=[package_name],

    install_requires=['setuptools'],
    zip_safe=True,

    maintainer='omi',
    maintainer_email='omkarhonrao108@gmail.com',

    description='ROS2 service package',
    license='Apache License 2.0',

    entry_points={
        'console_scripts': [
            'reset_counter_server = my_service_pkg.reset_counter_server:main',
            'reset_counter_client = my_service_pkg.reset_counter_client:main',
        ],
    },
)
