#Example Package Directory Structure
dpkg -L nano

/bin/nano
/usr/share/doc/nano
/usr/share/nano/tex.nanorc


#Add SMB
sudo nano /etc/samba/smb.conf
sudo service smbd restart



#Compile SDL Core Simple
cd /core_builds
mkdir -p /core_builds/usr/share/sdl-core
mkdir -p /core_builds/usr/local/bin

mv /sdlcore_simple_build/bin /core_builds/usr/share/sdl-core/simple_bin

nano /core_builds/usr/local/bin/sdl-core
```bash
#!/bin/bash

cd "$(dirname "$0")"
cd ../../../usr/share/sdl-core/simple_bin/ 
./start.sh
```


mkdir DEBIAN
nano ./DEBIAN/control
```
Package: sdl-core
Version: 1.0-1
Section: base
Priority: optional
Architecture: i386
Maintainer: Your Name <you@email.com>
Description: Sdl Core 
 sdl core!
```


dpkg-deb -v --build /core_builds /sdl_core/compiled_packages/sdl-core_1.0-1.deb

sudo apt install ./sdl-core_1.0-1.deb


dpkg-deb -v --build bin sdl-core_1.0-1.deb



dpkg-deb --build sdl-core_1.0-1


cd /build2/bin
cp start.sh sdl-core
rm start.sh




TODO update core with DEPENDS.

mkdir /core_builds/sdl-core_1.0-1
cd /core_builds/sdl-core_1.0-1

mkdir DEBIAN
nano ./DEBIAN/control
```
Package: sdl-core
Version: 1.0-1
Section: base
Priority: optional
Architecture: i386
Maintainer: Your Name <you@email.com>
Description: Sdl Core 
 sdl core!
```


mkdir -p  /core_builds/sdl-core_1.0-1/usr/local
ln -s /build2/bin /core_builds/sdl-core_1.0-1/usr/local/bin
cd /core_builds
dpkg-deb --build sdl-core_1.0-1

cd /sdl_core/compiled_packages
dpkg-deb --build sdl-core_1.0-1

dpkg-deb --build /core_builds/sdl_core_1.0-1




#Basic HOWTO
https://ubuntuforums.org/showthread.php?t=910717


<project>_<major version>.<minor version>-<package revision>

helloworld_1.0-1

mkdir helloworld_1.0-1

mkdir helloworld_1.0-1/usr
mkdir helloworld_1.0-1/usr/local
mkdir helloworld_1.0-1/usr/local/bin



##Control
helloworld_1.0-1/DEBIAN/control

Package: helloworld
Version: 1.0-1
Section: base
Priority: optional
Architecture: i386
Depends: libsomethingorrather (>= 1.2.13), anotherDependency (>= 1.2.6)
Maintainer: Your Name <you@email.com>
Description: Hello World
 When you need some sunshine, just run this
 small program!
 
 (the space before each line in the description is important)


dpkg-deb --build helloworld_1.0-2



sudo apt install ./helloworld_1.0-2.deb 





