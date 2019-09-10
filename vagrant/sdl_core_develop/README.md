#Start

cd /core/build/bin


./start.sh


##Connect via hmi
hmi2.localhost

##Connect App
###ip of host
192.168.1.57
###port
12345

or





#Restart Database
rm /core/build/bin/storage -R
./start.sh


#Check Samba
sudo service smbd restart
sudo service smbd status
sudo service samaba status
cat /etc/samba/smb.conf 

##Connect To Samba
smb://192.168.1.223

login as guest

/core/build/bin/storage/policy.sqlite


build_dev
vagrant:vagrant



#Update From Develop From Host
git checkout russ/vagrant-develop

git pull upstream
git pull upstream develop


##Rebuild on Vagrant Box

cd /core/sdl_core

git checkout russ/vagrant-develop

git pull


##Make and install
cd cd /core/build
make
make install

cd bin
nano log4cxx.properties
nano sdl_preloaded_pt.json

0x07
http://192.168.1.57:4005/api/v1/production/policy


sudo nano smartDeviceLink.ini
; WebSocket connection address and port
ServerAddress = 0.0.0.0
ServerPort = 8087


#Lock Screen Image

https://i.imgur.com/TgkvOIZ.png
![alt text](https://i.imgur.com/TgkvOIZ.png "Logo Title Text 1")

https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png
![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Logo Title Text 1")



#Zip ubuntu version and save




cd /core
vagrant@sdl-core-develop:/core$ du -hs build
4.5G    build

tar -czvf develop-2019-08-08.tar.gz /core/build


