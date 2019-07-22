#!/usr/bin/env bash


sudo apt-get update -y
sudo apt-get install git cmake build-essential libavahi-client-dev libsqlite3-dev chromium-browser libssl-dev libudev-dev libgtest-dev libbluetooth3 libbluetooth-dev bluez-tools gstreamer1.0* libpulse-dev libusb-1.0-0-dev -y

#sudo apt-get upgrade -y

sudo ldconfig
