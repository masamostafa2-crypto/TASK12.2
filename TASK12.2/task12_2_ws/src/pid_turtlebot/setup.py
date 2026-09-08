from setuptools import find_packages, setup

package_name = 'pid_turtlebot'

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
    maintainer='masa',
    maintainer_email='masamostafa2017@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',

        ],
    },
    entry_points={
        'console_scripts': [
            'yaw_pid = pid_turtlebot.yaw_pid:main',
            'linear_pid = pid_turtlebot.linear_pid:main',
            'solve_maze = pid_turtlebot.solve_maze:main',
            'heading_pid = pid_turtlebot.heading_pid:main',
        ],
    },
)
