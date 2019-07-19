#!/usr/bin/env bash
#https://staging.smartdevicelink.com/en/guides/core/audio-and-video-streaming-setup/

#https://github.com/mavlink/qgroundcontrol/issues/4303

#solution use an older version of ubuntu?
#Currently the SDL Core repo is built for Ubuntu 18.04 as our default environment.
#currently ubuntu 18.


sudo su
apt-get install git cmake build-essential libavahi-client-dev libsqlite3-dev chromium-browser libssl-dev libudev-dev libgtest-dev libbluetooth3 libbluetooth-dev bluez-tools gstreamer1.0* libpulse-dev
apt-get update
apt-get upgrade
ldconfig

#TODO not mention in docs, required for ubuntu server version. also desktop
apt-get install libusb-1.0-0-dev

apt-install

#video streaming support for gstreamer
apt-get install libxv-dev

#dvddemux? probably not. Should be in the good plugins with gstreamer1.0*
apt-get install libdvdcss2