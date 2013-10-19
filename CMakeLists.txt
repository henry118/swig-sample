cmake_minimum_required(VERSION 2.8)
project(swig_sample)
option(java-binding "Turn on Java binding" ON)
option(python-binding "Turn on Python binding" ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(sample SHARED sample.cpp sample.h sample.i)

if(java-binding)
    add_subdirectory(java)
endif(java-binding)

if(python-binding)
    add_subdirectory(python)
endif(python-binding)
