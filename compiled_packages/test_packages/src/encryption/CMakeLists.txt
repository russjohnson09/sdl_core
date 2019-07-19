# Copyright (c) 2015, Ford Motor Company
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# Redistributions of source code must retain the above copyright notice, this
# list of conditions and the following disclaimer.
#
# Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following
# disclaimer in the documentation and/or other materials provided with the
# distribution.
#
# Neither the name of the Ford Motor Company nor the names of its contributors
# may be used to endorse or promote products derived from this software
# without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.


project(encryption)
cmake_minimum_required(VERSION 3.15)


include(cmake-helpers/cotire.cmake)
include(cmake-helpers/generators.cmake)
include(cmake-helpers/platform.cmake)
include(cmake-helpers/sources.cmake)


function(collect_sources SOURCES PATHS)
  set(OPTIONAL_ARG ${ARGN})
  set(HEADERS_LOCAL)
  set(SOURCES_LOCAL)
  get_os(OS)

  foreach(PATH_ENTRY ${PATHS})
    file(GLOB_RECURSE SOURCES_TO_FILTER "${PATH_ENTRY}/*.c" "${PATH_ENTRY}/*.cc" "${PATH_ENTRY}/*.cpp")
    filter_files(SOURCES_TO_FILTER "${OPTIONAL_ARG}")
    list(APPEND SOURCES_LOCAL ${SOURCES_TO_FILTER})
    set(SOURCES_TO_FILTER)
    if(${OS} STREQUAL "win")
      file(GLOB_RECURSE HEADERS_TO_FILTER "${PATH_ENTRY}/*.h" "${PATH_ENTRY}/*.hpp")
      filter_files(HEADERS_TO_FILTER "${OPTIONAL_ARG}")
      list(APPEND HEADERS_LOCAL ${HEADERS_TO_FILTER})
      set(HEADERS_TO_FILTER)
    endif()
  endforeach()

  if(${OS} STREQUAL "win")
    source_group("Header Files" FILES ${HEADERS_LOCAL})
    source_group("Source Files" FILES ${SOURCES_LOCAL})
  endif()
  set(${SOURCES} ${SOURCES_LOCAL} PARENT_SCOPE)
endfunction()





#include(${CMAKE_SOURCE_DIR}/tools/cmake/helpers/sources.cmake)



set(ENCRYPTION_INCLUDE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include)

#set(ENCRYPTION_INCLUDE_DIRECTORY ${ENCRYPTION_INCLUDE_DIRECTORY} PARENT_SCOPE)

message( "ENCRYPTION_INCLUDE_DIRECTORY": ${ENCRYPTION_INCLUDE_DIRECTORY} )


include_directories (
  ${ENCRYPTION_INCLUDE_DIRECTORY}
)

collect_sources(SOURCES "${CMAKE_CURRENT_SOURCE_DIR}")

message( "SOURCES": ${SOURCES} )


set (LIBRARIES crypto)

add_library("encryption" ${SOURCES})

target_link_libraries("encryption" "${LIBRARIES}")


#OPENSSL_ROOT_DIR
#export PATH="/usr/local/opt/openssl@1.1/bin:$PATH"
# export LDFLAGS="-L/usr/local/opt/openssl@1.1/lib"
 #export CPPFLAGS="-I/usr/local/opt/openssl@1.1/include"
 #export PKG_CONFIG_PATH="/usr/local/opt/openssl@1.1/lib/pkgconfig"


#https://cmake.org/cmake/help/v3.10/envvar/LDFLAGS.html


message( "PATH": $ENV{PATH} )

#link_directories
#https://stackoverflow.com/questions/28597351/how-do-i-add-a-library-path-in-cmake

#https://answers.ros.org/question/201258/how-to-link-c-library-in-cmake-file/

link_directories(/foo /usr/local/bin /usr/bin /bin:/usr/sbin /sbin)


#https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-To-Find-Libraries



#https://stackoverflow.com/questions/16711078/cmake-how-to-point-to-the-latest-version-of-a-library
#some constants are predefined by cmake


#set(OpenSSL_NO_SYSTEM_PATHS ON)
#set(OpenSSL_ROOT /usr/)

#https://stackoverflow.com/questions/29792009/cmake-osx-mac-openssl-brew


#https://stackoverflow.com/questions/29792009/cmake-osx-mac-openssl-brew


include_directories(/usr/local/Cellar/openssl/1.0.2s/include)
#set(OpenSSL_ROOT /usr/local/Cellar/openssl/1.0.2s/include)
find_package(OpenSSL REQUIRED)


#https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-To-Find-Libraries#performance-and-caching
#find_package(OpenSSL)
message( "OpenSSL_FOUND": ${OpenSSL_FOUND} )
message( "OpenSSL_INCLUDE_DIRS": ${OpenSSL_INCLUDE_DIRS} )
message( OpenSSL_INCLUDES: ${OpenSSL_INCLUDES} )
message( OpenSSL_DEFINITIONS: ${OpenSSL_DEFINITIONS} )
message( OpenSSL_LIBRARIES: ${OpenSSL_LIBRARIES} )

#include_directories(${OpenSSL_INCLUDE_DIRS})
#set(LIBS ${LIBS} ${OpenSSL_LIBRARIES})


#OpenSSL pointing to wrong version when found
# Found OpenSSL: /usr/lib/libcrypto.dylib (found version "1.0.2s")

