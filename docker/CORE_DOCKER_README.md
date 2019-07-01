#Fork core
docker run -d -p 12345:12345 -p 8080:8080 -p 8087:8087 -p 3001:3001 --name core smartdevicelink/core:latest


docker exec -it core /bin/bash

##Existing Core
cd /usr/sdl

CMakeCache.txt	COMMITTERS.md	 FindQt.sh  README.md  cmake_install.cmake   mykey.pem			tools
CMakeFiles	CONTRIBUTING.md  LICENSE    bin        install_manifest.txt  qnx_6.5.0_linux_x86.cmake
CMakeLists.txt	Doxyfile	 Makefile   cmake      mycert.pem	     src
# pwd

##No Space
https://forums.docker.com/t/no-space-left-on-device-error/10894/12

docker rm $(docker ps -q -f 'status=exited')
docker rmi $(docker images -q -f "dangling=true")



##New Core
cd /

git clone https://github.com/russjohnson09/sdl_core.git

mkdir build
cd build
cmake ../sdl_core
make
make install



##Bluetooth
In file included from /sdl_core/src/components/transport_manager/src/bluetooth/bluetooth_device.cc:34:0:
/sdl_core/src/components/transport_manager/include/transport_manager/bluetooth/bluetooth_device.h:39:33: fatal error: bluetooth/bluetooth.h: No such file or directory

apt-get install libbluetooth3 libbluetooth-dev bluez-tools
apt-get update

W: Failed to fetch http://deb.debian.org/debian/dists/jessie-updates/InRelease  Unable to find expected entry 'main/binary-amd64/Packages' in Release file (Wrong sources.list entry or malformed file)

E: Some index files failed to download. They have been ignored, or old ones used instead.


/sdl_core/src/components/transport_manager/include/transport_manager/usb/libusb/usb_handler.h:39:31: fatal error: libusb-1.0/libusb.h: No such file or directory
 #include <libusb-1.0/libusb.h>
 
Bellow is suggested in the readme but does not seem to work
apt-get install libusb-dev

This matches what is required.
apt-get install libusb-1.0-0-dev


##IP Address
Michaels-MBP:sdl_core russelljohnson$ docker inspect core | grep IP
            "LinkLocalIPv6Address": "",
            "LinkLocalIPv6PrefixLen": 0,
            "SecondaryIPAddresses": null,
            "SecondaryIPv6Addresses": null,
            "GlobalIPv6Address": "",
            "GlobalIPv6PrefixLen": 0,
            "IPAddress": "172.17.0.3",
            "IPPrefixLen": 16,
            "IPv6Gateway": "",
                    "IPAMConfig": null,
                    "IPAddress": "172.17.0.3",
                    "IPPrefixLen": 16,
                    "IPv6Gateway": "",
                    "GlobalIPv6Address": "",
                    "GlobalIPv6PrefixLen": 0,





#Logging
sdl_core/src/appMain/log4cxx.properties

/bin/log4cxx.properties
log4j.rootLogger=ALL, Console, SmartDeviceLinkCoreLogFile


#Policy Server Config
Delete sqlite db.
/usr/sdl/bin/storage/policy.sqlite

https://www.digitalocean.com/community/tutorials/how-to-share-data-between-the-docker-container-and-the-host




https://stackoverflow.com/questions/28302178/how-can-i-add-a-volume-to-an-existing-docker-container



#Fork ubuntu
docker images


docker run -dP ubuntu:18.04




docker commit -m "init" core russjohnson09/sdl_core:latest
docker push russjohnson09/sdl_core:latest


##Setup Core
apt-get update
apt-get install git

git clone https://github.com/russjohnson09/sdl_core.git


apt-get install git cmake build-essential libavahi-client-dev libsqlite3-dev chromium-browser libssl-dev libudev-dev libgtest-dev libbluetooth3 libbluetooth-dev bluez-tools libpulse-dev
apt-get install libusb-1.0-0-dev

TODO fix these conflicts
apt-get install gstreamer1.0* 

apt-get update
apt-get upgrade
ldconfig



##Build Core Requires sudo
apt-get install sudo

apt-get install python


apt-get install curl
curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py
python get-pip.py

python version used gcc,

print etc support


TypeError: unsupported operand type(s) for +: 'dict_items' and 'list'
make[2]: *** [src/components/interfaces/CMakeFiles/MOBILE_API.dir/build.make:101: src/components/interfaces/MOBILE_API.h] Error 1





#Docker Compose
Use russjohnson09/sdl_core:latest and replace sdl_core with the local version.



mkdir build
cd build
cmake ../sdl_core


