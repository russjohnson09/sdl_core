# Install script for directory: /Users/russelljohnson/dev/sdl_core/src/components

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
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/interfaces/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/protocol/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/transport_manager/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/resumption/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/formatters/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/protocol_handler/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/connection_handler/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/utils/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/security_manager/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/policy/policy_regular/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/rpc_base/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/smart_objects/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/application_manager/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/hmi_message_handler/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/config_profile/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/media_manager/cmake_install.cmake")
  include("/Users/russelljohnson/dev/sdl_core/compiled_packages/macos/src/components/telemetry_monitor/cmake_install.cmake")

endif()

