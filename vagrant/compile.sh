#!/usr/bin/env bash



t1=$(date +%s)


#sudo rm /build -R || true

#allow for using the current build if available and cache off of that.
sudo mkdir /core || true
sudo chown vagrant:vagrant /core
cd /core

git clone --depth 1 https://github.com/russjohnson09/sdl_core.git -b russ/vagrant-master || true
cd /core/sdl_core
sudo chown vagrant:vagrant /core/sdl_core

git pull

mkdir /core/build || true

sudo chown vagrant:vagrant /core/build

cd /core/build

cmake -DBUILD_AVAHI_SUPPORT=OFF -DBUILD_USB_SUPPORT=OFF -DBUILD_BT_SUPPORT=OFF \-DEXTENDED_MEDIA_MODE=OFF -DENABLE_HMI_PTU_DECRYPTION=OFF /core/sdl_core

#there is an initial install of the third party apps that doesn't have the percent and can take a while because it cannot use multiple cores.
make -j 8


t2=$(date +%s)


echo "$t1 $t2 "

d1=$((t2-t1))
echo "$d1 seconds"


make install


#vagrant rsync-auto


