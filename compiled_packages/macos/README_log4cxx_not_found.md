#Compile
Building CXX object src/components/config_profile/CMakeFiles/ConfigProfile.dir/src/ini_file.cc.o
In file included from /Users/russelljohnson/dev/sdl_core/src/components/config_profile/src/ini_file.cc:42:
/Users/russelljohnson/dev/sdl_core/src/components/include/utils/logger.h:40:10: fatal error: 'log4cxx/propertyconfigurator.h' file not found
#include <log4cxx/propertyconfigurator.h>


Solution link this directory so that can be referrenced.


Convert this to use the full path.




https://stackoverflow.com/questions/4134764/how-to-define-several-include-path-in-makefile
