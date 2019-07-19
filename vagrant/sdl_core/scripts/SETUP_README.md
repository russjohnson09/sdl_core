#Testing gstreaming
sudo su
apt-get install git cmake build-essential libavahi-client-dev libsqlite3-dev chromium-browser libssl-dev libudev-dev libgtest-dev libbluetooth3 libbluetooth-dev bluez-tools gstreamer1.0* libpulse-dev


cd /sdl_core/vagrant/sdl_core/scripts/
gst-launch-1.0 filesrc location=sample_iPod.m4v  ! decodebin ! videoconvert ! ximagesink sync=false











#these packages should be included in the * packages
apt-get install apt-get install libgstreamer1.0-0 gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly gstreamer1.0-libav gstreamer1.0-doc gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-alsa gstreamer1.0-gl gstreamer1.0-gtk3 gstreamer1.0-qt5 gstreamer1.0-pulseaudio