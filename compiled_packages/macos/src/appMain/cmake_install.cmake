# Install script for directory: /Users/russelljohnson/dev/sdl_core/src/appMain

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/russelljohnson/dev/sdl_core/compiled_packages/macos")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/appMain/smartDeviceLinkCore")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore")
    execute_process(COMMAND "/usr/bin/install_name_tool"
      -change "/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/3rd_party/expat-2.1.0/libexpat.dylib" "libexpat.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/bin/plugins"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/usr/local/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/usr/local"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/bin"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/smartDeviceLinkCore")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES
    "/Users/russelljohnson/dev/sdl_core/src/appMain/build_config.txt"
    "/Users/russelljohnson/dev/sdl_core/src/appMain/log4cxx.properties"
    "/Users/russelljohnson/dev/sdl_core/src/appMain/audio.8bit.wav"
    "/Users/russelljohnson/dev/sdl_core/src/appMain/test.txt"
    "/Users/russelljohnson/dev/sdl_core/src/appMain/smartDeviceLink.ini"
    "/Users/russelljohnson/dev/sdl_core/src/appMain/hmi_capabilities.json"
    "/Users/russelljohnson/dev/sdl_core/src/appMain/sdl_preloaded_pt.json"
    "/Users/russelljohnson/dev/sdl_core/src/appMain/sample_policy_manager.py"
    "/Users/russelljohnson/dev/sdl_core/mycert.pem"
    "/Users/russelljohnson/dev/sdl_core/mykey.pem"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/Users/russelljohnson/dev/sdl_core/src/appMain/sdl_preloaded_pt.json")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/russelljohnson/dev/sdl_core/src/appMain/start.sh")
endif()

