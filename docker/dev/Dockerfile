FROM russjohnson09/sdl_core:dev


ADD ./start-script.sh /start-script.sh

RUN chmod +x /start-script.sh
ENTRYPOINT /start-script.sh



#docker commit -m "init" core_dev russjohnson09/sdl_core:dev
#docker commit -m "init" core_dev russjohnson09/sdl_core:dev

#cmake ../sdl_core
#make
#make install


#cd /build_x
#cmake -DBUILD_AVAHI_SUPPORT=$DBUILD_AVAHI_SUPPORT \
#    -DBUILD_USB_SUPPORT=$DBUILD_USB_SUPPORT \
#    -DBUILD_BT_SUPPORT=$DBUILD_BT_SUPPORT \
#    -DEXTENDED_MEDIA_MODE=$DEXTENDED_MEDIA_MODE \
#    -DENABLE_HMI_PTU_DECRYPTION=$DENABLE_HMI_PTU_DECRYPTION \
#    ../sdl_core

#cd /build_x
#cmake -DEXTENDED_POLICY=EXTERNAL_PROPRIETARY ../sdl_core
#cmake -DEXTENDED_POLICY=EXTERNAL_PROPRIETARY ../sdl_core
#make
#make install
