#Start New Container From Core Image Or Ubuntu Image

https://docs.docker.com/engine/reference/commandline/create/
FROM ubuntu


docker create --memory=8G --memory-swap=1G -t -i --name sdl_core ubuntu:latest bash

docker run --name=sdl_core -it --memory="1G" Ubuntu:latest

docker start -a -i sdl_core

#Install

docker rm $(docker ps -q -f 'status=exited')
docker rmi $(docker images -q -f "dangling=true")

apt-get update
apt-get install git
apt-get install git cmake build-essential libavahi-client-dev libsqlite3-dev chromium-browser libssl-dev libudev-dev libgtest-dev libbluetooth3 libbluetooth-dev bluez-tools libpulse-dev


apt-get install libusb-1.0-0-dev
apt-get install libxv-dev
apt-get install libdvdcss2
apt-get install sudo


swapon --show
fallocate -l 1G /swapfile
mkswap /swapfile
chmod 600 /swapfile
swapon /swapfile


cd /

git clone https://github.com/russjohnson09/sdl_core.git

mkdir build
cd build
cmake -DEXTENDED_POLICY=EXTERNAL_PROPRIETARY ../sdl_core
make VERBOSE=1
make install


#smb network share
sudo apt-get update
sudo apt-get install samba
sudo smbpasswd -a vagrant

sudo mkdir /shared_smb
sudo chown vagrant:vagrant /shared_smb 



##Add to end 
sudo nano /etc/samba/smb.conf
[shared_smb]
path = /shared_smb
valid users = vagrant
read only = no

[build_bin_storage]
path = /build/bin/storage
valid users = vagrant
read only = no

[build_bin]
path = /build/bin
valid users = vagrant
read only = no

[build2_bin]
path = /build2/bin
valid users = vagrant
read only = no


sudo service smbd restart
testparm

smb://192.168.1.201/shared_smb/
smb://192.168.1.201/build_bin_storage/

smb://192.168.1.201/build_bin/
smb://192.168.1.201/build2_bin/


##Allow Writes to Database
sudo chown vagrant:vagrant /build/bin -R


sqlite requires the user to have write access to the files and folders otherwise
a read only database error will be given.

sudo chmod 777 /build/bin/storage -R


#Settings
Allocate a TTY for this container prevents exiting even when not running?







docker run -d -p 12345:44567  --name core_temp5 russjohnson09/sdl_core:dev



#build contains cmake -DEXTENDED_POLICY=EXTERNAL_PROPRIETARY ../sdl_core


#build2 contains no additional arguments
sudo chown -R vagrant:vagrant /build2
cd /build2
cmake ../sdl_core
make VERBOSE=1
make install



##rebuild
https://www.boost.org/

c++ librarys

cotire
ccache



cmake ../sdl_core -DCMAKE_CXX_COMPILER_LAUNCHER=ccache 
make -j8
make install

https://stackoverflow.com/questions/318398/why-does-c-compilation-take-so-long

http://www.bitsnbites.eu/faster-c-builds/

precompiled headers


sudo apt-get install ccache
export PATH=/usr/lib/ccache:$PATH


cd /build2
make -j8
make install




#Cotire
https://github.com/sakra/cotire


cd /
sudo git clone https://github.com/sakra/cotire.git
sudo chown vagrant:vagrant cotire -R



cp cotire/CMake/cotire.cmake /sdl_core/



set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")



#hmi
cmake ../sdl_core -DENABLE_HMI_PTU_DECRYPTION=OFF 
make
make install




#run manticore
docker run -d -p 12345:12345 -p 3001:3001 -p 9000:9000 --name core smartdevicelink/manticore-sdl-core:default-5.1.3





sqlite3 policy.sqlite
