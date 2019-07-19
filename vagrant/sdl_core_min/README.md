#Compile
Options have been changed in the CMakeLists.txt to work by default without any additional
variables, but the ones to look out for are listed bellow under cmake config.

##Install Dependencies


##Run ldconfig
https://askubuntu.com/questions/631275/how-do-i-do-this-install-you-may-need-to-run-ldconfig

I don't quite get what this does. It may affect gcc being able to find some of the c libraries?

I'm not sure if this is necessary. Skipping.


##Run dyld on mac?
sudo update_dyld_shared_cache




##Run Cmake
sudo mkdir /build_sdl
sudo chown vagrant:vagrant /build_sdl

cd /build_sdl
cmake /sdl_core


##Run makefile
cd /build_sdl
make

##Run Install
make install


##After Changes Are Made
make
make install



##Create Networked Drive For Core DB
This is optional but allows the host to view
the sqlite database which is normally local only.


##Pull In Changes From Develop
When changes are made you will need to pull them in and run
```
cd /build_sdl
make
make install
```








#CMake Config
##ENABLE_HMI_PTU_DECRYPTION

##EXTENDED_POLICY
