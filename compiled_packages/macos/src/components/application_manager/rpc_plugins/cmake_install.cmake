# Install script for directory: /Users/russelljohnson/dev/sdl_core/src/components/application_manager/rpc_plugins

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/application_manager/rpc_plugins/vehicle_info_plugin/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/application_manager/rpc_plugins/sdl_rpc_plugin/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/application_manager/rpc_plugins/rc_rpc_plugin/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/application_manager/rpc_plugins/app_service_rpc_plugin/cmake_install.cmake")

endif()

