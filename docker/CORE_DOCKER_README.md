#Fork ubuntu
docker images


docker run -dP ubuntu:18.04




docker commit -m "init" ubuntu russjohnson09/sdl_core:latest
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








#Docker Compose
Use russjohnson09/sdl_core:latest and replace sdl_core with the local version.



