from setuptools import find_packages, setup
import os

package_name = 'kiosk'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        # 패키지 정보 파일
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        
        # 데이터 파일 - images
        (os.path.join('share', package_name, 'data/images'), [
            'data/images/ARIS.png',
            'data/images/free-icon-automate-6086806.png',
            'data/images/free-icon-bar-6028207.png',
            'data/images/free-icon-hand-cursor-5781782.png',
            'data/images/free-icon-ice-cream-8357743.png',
            'data/images/free-icon-log-in-1176390.png',
            'data/images/free-icon-map-395003.png',
            'data/images/free-icon-plug-10396335.png',
            'data/images/free-icon-table-8015427.png',
            'data/images/free-icon-takeaway-7770713.png',
            'data/images/free-icon-turkey-12694430.png',
            'data/images/free-icon-wall-698633.png',
            'data/images/KIOSK.png',
            'data/images/충전스테이션.png',
            'data/images/키오스크_정면.png',
            'data/images/Screenshot from 2024-07-04 10-28-03.png',
            'data/images/Screenshot from 2024-07-04 10-57-05.png',
            'data/images/Screenshot from 2024-07-04 12-05-16.png',
            'data/images/Screenshot_from_2024-07-04_12-19-44-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_12-20-02-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_12-20-15-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_13-20-28-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_13-20-51-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_13-21-06-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_13-22-28-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_13-22-43-removebg-preview.png',
            'data/images/Screenshot_from_2024-07-04_13-22-47-removebg-preview.png',
            'data/images/Screenshot from 2024-07-04 13-40-02.png',
            'data/images/Screenshot_from_2024-07-04_14-18-45-removebg-preview (1).png',
            'data/images/Screenshot from 2024-08-21 11-51-51.png',
        ]),

        # 데이터 파일 - ui
        (os.path.join('share', package_name, 'data/ui'), [
            'data/ui/flavor.ui',
            'data/ui/info.ui',
            'data/ui/main.ui',
            'data/ui/receive.ui',
            'data/ui/recive.ui',
            'data/ui/resource_pay.qrc',
            'data/ui/resource.qrc',
            'data/ui/resource_recive.qrc',
            'data/ui/resource_serve.qrc',
            'data/ui/resource_table.qrc',
            'data/ui/resource_topping.qrc',
            'data/ui/resourece_order.qrc',
            'data/ui/serve.ui',
            'data/ui/table.ui',
            'data/ui/topping.ui',
        ]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='harry',
    maintainer_email='harry0747@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [

            'kiosk = kiosk.final_kiosk:main',
            'receive = kiosk.receive:main'
 
        ],
    },
)

