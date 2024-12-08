from setuptools import find_packages, setup

package_name = 'term_project'

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
    maintainer='seyoun',
    maintainer_email='seyoun@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'kiosk_action = term_project.kiosk_action:main',
        	'robot = term_project.robot:main',
        	'kiosk_service = term_project.kiosk_service:main',
        	'robot_sub = term_project.robot_sub:main',
        	'machine2 = term_project.machine2:main',
        	'machine3 = term_project.machine3:main',
        	'machine_sub = term_project.machine_sub:main',
        	'kiosk_service3 = term_project.kiosk_service3:main',
        ],
    },
)
