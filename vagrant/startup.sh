#!/usr/bin/env bash



t1=${date +%s}

sudo rm /build -R || true
sudo mkdir /build
cd /build

cmake -DBUILD_AVAHI_SUPPORT=OFF -DBUILD_USB_SUPPORT=OFF -DBUILD_BT_SUPPORT=OFF \-DEXTENDED_MEDIA_MODE=OFF -DENABLE_HMI_PTU_DECRYPTION=OFF /sdl_core

t2=$(date +%s)


echo "$t1 $t2 "

d1=t2-t1
echo "$t1 $t2 "
