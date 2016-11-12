cmake_minimum_required(VERSION 3.6)
project(TextReigns)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
        ${CMAKE_CURRENT_LIST_DIR}/include
)

#set(SOURCE_FILES
#        src/option.cpp
#        src/reign.cpp
#        src/reignpowers.cpp
#        src/card.cpp
#        src/king.cpp)

#add_executable(TextReigns ${SOURCE_FILES} src/main.cpp)
add_executable(testCard src/card.cpp src/reignpowers.cpp test/testCard.cpp)