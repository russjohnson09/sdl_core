#Install python 3
https://tecadmin.net/install-python-3-7-on-ubuntu-linuxmint/

wget https://www.python.org/ftp/python/3.7.3/Python-3.7.3.tgz
tar xzf Python-3.7.3.tgz
cd Python-3.7.3
sudo ./configure --enable-optimizations
make install



apt-get install ppa-purge

https://askubuntu.com/questions/865554/how-do-i-install-python-3-6-using-apt-get
sudo add-apt-repository ppa:deadsnakes/ppa


add-apt-repository ppa:deadsnakes/ppa

apt-get install libreadline-gplv2-dev libncursesw5-dev libssl-dev libsqlite3-dev tk-dev libgdbm-dev libc6-dev libbz2-dev libffi-dev zlib1g-dev
wget https://www.python.org/ftp/python/3.7.3/Python-3.7.3.tgz





https://askubuntu.com/questions/320996/how-to-make-python-program-command-execute-python-3

the python manager example should use the correct version though?



apt-get install software-properties-common

apt-get install python3.6
apt install python3-pip

http://ubuntuhandbook.org/index.php/2017/07/install-python-3-6-1-in-ubuntu-16-04-lts/

Traceback (most recent call last):
  File "sample_policy_manager.py", line 7, in <module>
    import tornado.httpserver
  File "/usr/local/lib/python2.7/dist-packages/tornado/httpserver.py", line 144
    def __init__(self, *args: Any, **kwargs: Any) -> None:
    
#Install pip
apt-get install python-pip

#Python Policy Manager
python sample_policy_manager.py
Traceback (most recent call last):
  File "sample_policy_manager.py", line 7, in <module>
    import tornado.httpserver
  File "/usr/local/lib/python2.7/dist-packages/tornado/httpserver.py", line 144
    def __init__(self, *args: Any, **kwargs: Any) -> None:
                            ^
SyntaxError: invalid syntax

https://pypi.org/project/tornado/3.2.1/
https://github.com/OnBeep/opuslib/issues/5
pip3 install tornado
pip install opuslib==2.0.0


python3 sample_policy_manager.py
https://stackoverflow.com/questions/43948454/python-invalid-syntax-with-async-def
# python3 sample_policy_manager.py
Traceback (most recent call last):
  File "sample_policy_manager.py", line 7, in <module>
    import tornado.httpserver
  File "/usr/local/lib/python3.4/dist-packages/tornado/httpserver.py", line 204
    async def close_all_connections(self) -> None:
            ^
SyntaxError: invalid syntax

#Create Docker Image For Simple Core

##Remove any potential duplicates
docker container prune

docker run -it --name core_simple smartdevicelink/core:latest


##Allow Remote Connection
apt-get install nano

nano /usr/sdl/bin/smartDeviceLink.ini
;ServerAddress = 127.0.0.1
ServerAddress = 0.0.0.0

##Enable Logging
nano /usr/sdl/bin/log4cxx.properties

log4j.rootLogger=ALL, Console, SmartDeviceLinkCoreLogFile


##Restart Storage
rm /usr/sdl/bin/storage -R


##Commit and Test
docker commit -m "core_simple_test" core_simple_test russjohnson09/sdl_core:xp3


##Test With TCP And Main Websocket Forwarding Only
docker run -d -p 12346:12345 -p 8088:8087 --name core_simple_test russjohnson09/sdl_core:xp3


###Add Local SDL Policy
docker run -d -p 12347:12345 -p 8089:8087 --name core_simple_test_2 russjohnson09/sdl_core:simple

nano /etc/hosts
192.168.1.57 policy.localhost
192.168.1.57 shaid.localhost

docker start core_simple_test_2

docker exec -it core_simple_test_2 /bin/bash


docker start core_simple_test

https://forums.docker.com/t/run-command-in-stopped-container/343
docker start -ai core_simple_test

docker start -ai core_simple_test tail -f /var/log/something


docker run -dit core_simple_test
docker run -it -p 8091:8091 core_simple_test


docker attach core_simple_test
docker start -it core_simple_test


docker exec -it core_simple_test /bin/bash



####Add To Config
/usr/sdl/bin/sdl_preloaded_pt.json


http://policy.localhost/api/v1/production/policy
http://shaid.localhost
```
"0x07": {
    "default": ["http://192.168.1.57:4005/api/v1/production/policy"]
        "default": ["http://policy.localhost/api/v1/production/policy"]
},
"0x04": {
    "default": ["http://ivsu.software.ford.com/api/getsoftwareupdates"]
},
"queryAppsUrl": {
    "default": ["http://192.168.1.57:4001"]
},
"lock_screen_icon_url": {
    "default": ["http://i.imgur.com/QwZ9uKG.png"]
}
```

###Reset DB And Main Thread
rm /usr/sdl/bin/storage -R

lsof -i
MainThrea  18 root    9u  IPv4 1371614      0t0  TCP *:12345 (LISTEN)

kill this or restart the container.




##Set Local sdl_hmi
russ_hmi/app/Flags.js

8087 -> 8088 or whatever the port forward was set to.

docker push russjohnson09/sdl_core:simple



#Create Docker Image For External Proprietary
docker system prune --volumes
docker volume ls
docker volume prune
docker image prune
docker container prune

This should already be available as russjohnson09/sdl_core:xp but here are instructions.


docker commit -m "xp2" core_simple_test russjohnson09/sdl_core:xp2
docker push russjohnson09/sdl_core:xp2


##Save Often for Long process



docker commit -m "temp318" core_temp6 russjohnson09/sdl_core:temp318
Michaels-MBP:dev russelljohnson$ docker images | grep temp318


docker run -it --name core_temp7 russjohnson09/sdl_core:temp318



##Supervisor Startup
nano /etc/supervisor/conf.d/supervisord.conf
[supervisord]
nodaemon=true

[program:core]
priority=30
command=/build/bin/smartDeviceLinkCore
stdout_logfile=/dev/stdout


##Save After Confirming
docker commit -m "xp" core_temp6 russjohnson09/sdl_core:xp



##Test With TCP And Main Websocket Forwarding Only
docker run -it -p 12347:12345 -p 8089:8087 --name core_xp_test_3 russjohnson09/sdl_core:xp


docker run -it --name core_simple smartdevicelink/core:latest




docker run -it --name core_temp6 russjohnson09/sdl_core:dev



docker container prune





docker pull russjohnson09/sdl_core:latest

docker run -d -p 12345:12345 -p 8080:8080 -p 8087:8087 -p 3001:3001 --name core_temp1 russjohnson09/sdl_core:latest

docker run -d -p 12345:44567  --name core_temp5 russjohnson09/sdl_core:dev

#--interactive --tty
docker run -it --name core_temp6 russjohnson09/sdl_core:dev



docker-compose build




docker-compose up
