#!/usr/bin/env bash


FILE=/startup/.startup.sh
if test -f "$FILE"; then
    /startup/.startup.sh
else
  /startup/.startup-example.sh
fi




#sudo nohup /core/build/bin/start.sh > /core/build/sdl_log.out 2> /core/build/sdl_log.err

sudo chown vagrant:vagrant /core -R

rm /core/build/bin/storage -R || true

#doesn't actually start it but does the main setup.

#cd /core/build/bin/

#nohup ./start.sh > /core/build/sdl_log.out 2>&1


#./start.sh &
#/core/build/bin/start.sh &


#tail -f /core/build/sdl_log.out
#lsof -i :8000