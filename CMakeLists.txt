cmake_minimum_required (VERSION 2.8) 
project(Glauber)
set(CMAKE_CXX_FLAGS "-fPIC -g -std=c++11 -O -Wall -Wno-write-strings")

include(FindROOT.cmake)
set(INCLUDE_DIRECTORIES ${ROOT_INCLUDE_DIR})
include_directories(${INCLUDE_DIRECTORIES})
set(LINK_DIRECTORIES ${ROOT_LIBRARY_DIR})
link_directories(${LINK_DIRECTORIES})

ADD_EXECUTABLE(main.exe "main.cxx" "LWField.cxx")
TARGET_LINK_LIBRARIES(main.exe ${ROOT_LIBRARIES})
