#!/usr/bin/env bash


echo "samba setup manually
sudo apt-get install samba
sudo nano /etc/samba/smb.conf
[build]
    comment = Samba on Ubuntu
    path = /core/build
    read only = no
    browsable = yes
    valid users = vagrant

sudo smbpasswd -a vagrant

sudo service smbd restart

On mac any networked drives will be on /Volumes/

"
