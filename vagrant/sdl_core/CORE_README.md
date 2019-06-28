vm use bridge adapter to create a new ip connection instead of
forwarding.



192.168.1.87

sql database keeps track of ...





delete sql

change ptu json to point to policy

vagrant@sdl-core:/build/bin/storage$ ls
8675401
8675401_e128ba2f200bd187dcdfda1d91f2000fd5276194905f89127814226f8aa79ac9
policy.sqlite
vagrant@sdl-core:/build/bin/storage$ pwd
/build/bin/storage






brew install telnet



[TransportManager]
; Listening port form incoming TCP mobile connection
TCPAdapterPort = 12345




#Deploy

##Install Dependencies


##Make and install
sudo su*__*
cd /
mkdir build
cd build
cmake ../sdl_core
make
make install


##Run
cd bin
./start.sh   


##Start HMI
cd /sdl_hmi
chromium-browser index.html



https://stackoverflow.com/questions/2419566/best-way-to-use-multiple-ssh-private-keys-on-one-client


 cat ~/.ssh/config
IdentityFile ~/.ssh/id_rsa
IdentityFile ~/.ssh/id_rsa_old
IdentityFile ~/.ssh/id_ed25519



#Gstreamer
https://en.wikipedia.org/wiki/GStreamer

https://askubuntu.com/questions/949710/xv-drivers-ubuntu-16-04


In a guest terminal lsmod | grep vbox will show you installed guest adddition modules. You'll need the vboxvideo driver.




https://superuser.com/questions/310197/how-do-i-fix-a-cannot-open-display-error-when-opening-an-x-program-after-sshi



https://stackoverflow.com/questions/37562232/could-not-initialize-xv-output
try to install libxv-dev


export DISPLAY="127.0.0.1:10.0"



##Display
root@sdl-core:/sdl_core/vagrant/sdl_core/scripts# xvinfo
xvinfo:  Unable to open display 127.0.0.1:10.0

root@sdl-core:/sdl_core/vagrant/sdl_core/scripts# lspci
00:00.0 Host bridge: Intel Corporation 440FX - 82441FX PMC [Natoma] (rev 02)
00:01.0 ISA bridge: Intel Corporation 82371SB PIIX3 ISA [Natoma/Triton II]
00:01.1 IDE interface: Intel Corporation 82371AB/EB/MB PIIX4 IDE (rev 01)
00:02.0 VGA compatible controller: InnoTek Systemberatung GmbH VirtualBox Graphics Adapter
00:03.0 Ethernet controller: Intel Corporation 82540EM Gigabit Ethernet Controller (rev 02)
00:04.0 System peripheral: InnoTek Systemberatung GmbH VirtualBox Guest Service
00:07.0 Bridge: Intel Corporation 82371AB/EB/MB PIIX4 ACPI (rev 08)
00:0d.0 SATA controller: Intel Corporation 82801HM/HEM (ICH8M/ICH8M-E) SATA Controller [AHCI mode] (rev 02)





##ximagesink

https://gstreamer.freedesktop.org/documentation/ximagesink/index.html?gi-language=c



##xvimagesink
https://gstreamer.freedesktop.org/documentation/xvimagesink/index.html?gi-language=c

remote display not supported?



 gst-inspect-1.0  | grep demux


