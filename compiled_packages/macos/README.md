option(EXTENDED_MEDIA_MODE "Turn on and off extended Madia Manager features relates to PulseAudio A2DP and GStreamer" OFF)
option(BUILD_SHARED_LIBS "Build all libraries as shared (if ON) or static (if OFF)" OFF)
option(BUILD_BT_SUPPORT "Bluetooth support" OFF)
option(BUILD_USB_SUPPORT "libusb support" OFF)
option(BUILD_CLOUD_APP_SUPPORT "Cloud App Transport Support" OFF)
option(BUILD_BACKTRACE_SUPPORT "backtrace support" OFF)
option(BUILD_TESTS "Possibility to build and run tests" OFF)
option(TELEMETRY_MONITOR "Enable profiling time test util" OFF)
option(ENABLE_LOG "Logging feature" ON)
option(ENABLE_GCOV "gcov code coverage feature" OFF)
option(ENABLE_SANITIZE "Sanitize tool" OFF)
option(ENABLE_SECURITY "Security Ford protocol protection" OFF)



option(USE_COTIRE "Use Cotire to speed up build (currently only for commands tests)" OFF)
option(USE_GOLD_LD "Use gold linker intead of GNU linker" OFF)
option(USE_CCACHE "Turn on ccache usage" OFF)
option(USE_DISTCC "Turn on distributed build_usage" OFF)





brew install openssl


CMake Error at CMakeLists.txt:252 (string):
  string sub-command FIND requires 3 or 4 parameters.

cmake ../../ -DOPENSSL_INCLUDE_DIR=/usr/bin/openssl 




https://stackoverflow.com/questions/50251452/cmake-cannot-find-wxwidgets-library-on-macos-high-sierra



CMake Error at tools/cmake/modules/FindUDev.cmake:51 (MESSAGE):
  Could not find UDev library








#make

https://github.com/bazelbuild/bazel/issues/3622

/Users/russelljohnson/dev/sdl_core/src/3rd_party-static/encryption/include/encryption/hashing.h:5:10: fatal error: 'openssl/sha.h' file not found

https://www.anintegratedworld.com/mac-osx-fatal-error-opensslsha-h-file-not-found/



https://github.com/mongodb/mongo-php-driver/issues/523

$ cd /usr/local/include 
$ ln -s ../opt/openssl/include/openssl .


In file included from /Users/russelljohnson/dev/sdl_core/tools/intergen/utils/src/utils/common_types.cc:33:
/Users/russelljohnson/dev/sdl_core/tools/intergen/utils/include/utils/common_types.h:93:37: error: reference to non-static member function must be called
    bool valid_min = StringToNumber(min, &min_)



CMAKE_CXX_FLAGS

removed -Werror
https://embeddedartistry.com/blog/2017/5/3/-werror-is-not-your-friend


make -d
