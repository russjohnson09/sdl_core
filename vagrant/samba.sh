#!/usr/bin/env bash


echo "samba setup manually
sudo apt-get install samba
sudo nano /etc/samba/smb.conf
[build_dev]
    comment = Samba on Ubuntu
    path = /core/build
    read only = no
    browsable = yes
    valid users = vagrant


[build_guest]
    comment = Public files
    path = /core/build
    browsable = yes
    guest ok = yes
    writable = yes
    guest account = vagrant
    create mask = 0775
    directory mask = 0755

[core_guest]
    comment = Public files
    path = /core
    browsable = yes
    guest ok = yes
    writable = yes
    guest account = vagrant
    create mask = 0775
    directory mask = 0755


sudo smbpasswd -a vagrant

sudo adduser russ
sudo smbpasswd -a russ

sudo service smbd restart

On mac any networked drives will be on /Volumes/

"



#valid users = vagrant, russ



#https://linuxize.com/post/how-to-install-and-configure-samba-on-ubuntu-18-04/#connecting-to-a-samba-share-from-linux
#sudo apt install smbclient

#smbclient //127.0.0.1/build_dev -U vagrant



#vagrant@sdl-core-develop:/core/build/bin$ smbclient //127.0.0.1/build -U vagrant
#WARNING: The "syslog" option is deprecated
#Enter vagrant's password:
#Domain=[WORKGROUP] OS=[Windows 6.1] Server=[Samba 4.3.11-Ubuntu]
#tree connect failed: NT_STATUS_BAD_NETWORK_NAME



#smbclient //127.0.0.1/build_dev -U vagrant



#brew install smbclient
