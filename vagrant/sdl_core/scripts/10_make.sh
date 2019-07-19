#!/usr/bin/env bash
sudo su


# Generate our Makefile, compile it and install
# Remove everything but what's inside the bin folder of the build directory to save space
#RUN cmake -DBUILD_AVAHI_SUPPORT=$DBUILD_AVAHI_SUPPORT \
#    -DBUILD_USB_SUPPORT=$DBUILD_USB_SUPPORT \
#    -DBUILD_BT_SUPPORT=$DBUILD_BT_SUPPORT \
#    -DEXTENDED_MEDIA_MODE=$DEXTENDED_MEDIA_MODE \
#    -DENABLE_HMI_PTU_DECRYPTION=$DENABLE_HMI_PTU_DECRYPTION \
#    ../sdl_core \
#    && make \
#    && make install \
#    && mv bin /usr/tmpbin \
#    && rm -rf * \
#    && mv /usr/tmpbin bin
#/sdl_core/src/components/transport_manager/include/transport_manager/usb/libusb/usb_handler.h:39:31: fatal error: libusb-1.0/libusb.h: No such file or directory



mkdir build
cd build

cmake ../sdl_core
make
make install