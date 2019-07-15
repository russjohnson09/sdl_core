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
