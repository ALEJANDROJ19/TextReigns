cmake_minimum_required(VERSION 3.6)
project(TextReigns)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/card.h
    src/king.h
    src/main.cpp
    src/option.h
    src/reign.h
    src/reignpowers.h)

include_directories(.)
include_directories(src)

add_executable(TextReigns ${SOURCE_FILES})