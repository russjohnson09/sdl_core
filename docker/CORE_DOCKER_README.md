#Fork core
docker run -d -p 12345:12345 -p 8080:8080 -p 8087:8087 -p 3001:3001 --name core smartdevicelink/core:latest


docker exec -it core /bin/bash

##Existing Core
cd /usr/sdl

CMakeCache.txt	COMMITTERS.md	 FindQt.sh  README.md  cmake_install.cmake   mykey.pem			tools
CMakeFiles	CONTRIBUTING.md  LICENSE    bin        install_manifest.txt  qnx_6.5.0_linux_x86.cmake
CMakeLists.txt	Doxyfile	 Makefile   cmake      mycert.pem	     src
# pwd



##New Core
cd /

git clone https://github.com/russjohnson09/sdl_core.git

mkdir build
cd build
cmake ../sdl_core
make
make install


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


