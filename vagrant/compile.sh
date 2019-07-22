#!/usr/bin/env bash



t1=$(date +%s)

sudo rm /build -R || true
sudo mkdir /build
cd /build

sudo chown vagrant:vagrant /build

cmake -DBUILD_AVAHI_SUPPORT=OFF -DBUILD_USB_SUPPORT=OFF -DBUILD_BT_SUPPORT=OFF \-DEXTENDED_MEDIA_MODE=OFF -DENABLE_HMI_PTU_DECRYPTION=OFF /sdl_core


#there is an initial install of the third party apps that doesn't have the percent and can take a while because it cannot use multiple cores.
make -j8


t2=$(date +%s)


echo "$t1 $t2 "

d1=$((t2-t1))
echo "$d1 seconds"


make install


#vagrant rsync-auto


