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
docker commit -m "core_simple" core_simple russjohnson09/sdl_core:simple


##Test With TCP And Main Websocket Forwarding Only
docker run -d -p 12346:12345 -p 8088:8087 --name core_simple_test russjohnson09/sdl_core:simple

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
