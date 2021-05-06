cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES lesson04/Date.cpp lesson04/Date.h lesson04/Log.cpp lesson04/Log.h lesson04/q4_4.cpp)
add_executable(lesson01 ${SOURCE_FILES})