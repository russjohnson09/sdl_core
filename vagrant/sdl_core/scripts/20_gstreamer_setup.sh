#!/usr/bin/env bash



apt-get install gstreamer1.0*

#https://smartdevicelink.com/en/guides/core/audio-and-video-streaming-setup/

sudo su
apt-get install libxv-dev


#gstreamer xvimagesink
gst-launch-1.0 filesrc location=/sdl_core/vagrant/sdl_core/scripts/sample_iPod.m4v ! decodebin ! videoconvert ! xvimagesink sync=false


#gstreamer using ximagesink
gst-launch-1.0 filesrc location=/sdl_core/vagrant/sdl_core/scripts/sample_iPod.m4v  ! decodebin ! videoconvert ! ximagesink sync=false


gst-launch-1.0 filesrc location=/sdl_core/vagrant/sdl_core/scripts/cello82.mp3 ! mad ! audioconvert ! audioresample ! osssink





gst-inspect-1.0 xvimagesink | grep Filename
#ldd - print shared object dependencies


#https://askubuntu.com/questions/949710/xv-drivers-ubuntu-16-04
cd /sdl_core/vagrant/sdl_core/scripts/
gst-launch-1.0 filesrc location=sample_iPod.m4v  ! decodebin ! videoconvert ! ximagesink sync=false

gst-launch-1.0 filesrc location=sample_iPod.m4v ! decodebin ! videoconvert ! xvimagesink sync=false





gst-launch-1.0 filesrc location=cello82.mp3 ! mad ! audioconvert ! audioresample ! osssink
gst-launch-1.0 filesrc location=cello82.mp3 ! mad ! audioconvert ! audioresample


#https://gstreamer.freedesktop.org/documentation/ossaudio/osssink.html?gi-language=c
#gstosssink.c(399): gst_oss_sink_open (): /GstPipeline:pipeline0/GstOssSink:osssink0:


# gst-inspect-1.0  | grep demux

