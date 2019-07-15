cd /build2
cmake ../sdl_core -DENABLE_HMI_PTU_DECRYPTION=OFF 





sudo chown vagrant:vagrant /build -R
cd /build
cmake ../sdl_core -DENABLE_HMI_PTU_DECRYPTION=OFF -DEXTENDED_POLICY=EXTERNAL_PROPRIETARY
make
make install
