# Install script for directory: /home/rover/catkin_ws2/src/PlotJuggler

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/rover/catkin_ws2/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/rover/catkin_ws2/build/PlotJuggler/catkin_generated/installspace/plotjuggler.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake" TYPE FILE FILES
    "/home/rover/catkin_ws2/build/PlotJuggler/catkin_generated/installspace/plotjugglerConfig.cmake"
    "/home/rover/catkin_ws2/build/PlotJuggler/catkin_generated/installspace/plotjugglerConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler" TYPE FILE FILES "/home/rover/catkin_ws2/src/PlotJuggler/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/rover/catkin_ws2/install/share/applications/PlotJuggler.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/rover/catkin_ws2/install/share/applications" TYPE FILE FILES "/home/rover/catkin_ws2/src/PlotJuggler/PlotJuggler.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/rover/catkin_ws2/install/share/icons/plotjuggler.svg")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/rover/catkin_ws2/install/share/icons" TYPE FILE FILES "/home/rover/catkin_ws2/src/PlotJuggler/plotjuggler.svg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplotjuggler_base.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplotjuggler_base.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplotjuggler_base.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rover/catkin_ws2/devel/lib/libplotjuggler_base.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplotjuggler_base.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplotjuggler_base.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplotjuggler_base.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/rover/catkin_ws2/src/PlotJuggler/plotjuggler_base/include/")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/rover/catkin_ws2/build/PlotJuggler/3rdparty/qwt/src/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/3rdparty/backward-cpp/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/3rdparty/color_widgets/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/3rdparty/Qt-Advanced-Docking/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/3rdparty/lua-5.4.1/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_app/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/DataLoadCSV/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/DataLoadULog/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/DataStreamSample/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/DataStreamWebsocket/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/DataStreamUDP/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/StatePublisherCSV/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/ToolboxQuaternion/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/ToolboxFFT/cmake_install.cmake")
  include("/home/rover/catkin_ws2/build/PlotJuggler/plotjuggler_plugins/DataStreamZMQ/cmake_install.cmake")

endif()

