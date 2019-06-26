#!/usr/bin/env bash
#https://staging.smartdevicelink.com/en/guides/core/audio-and-video-streaming-setup/

sudo su
apt-get install git cmake build-essential libavahi-client-dev libsqlite3-dev chromium-browser libssl-dev libudev-dev libgtest-dev libbluetooth3 libbluetooth-dev bluez-tools gstreamer1.0* libpulse-dev
apt-get update
apt-get upgrade
ldconfig

#TODO not mention in docs
apt-get install libusb-1.0-0-dev
