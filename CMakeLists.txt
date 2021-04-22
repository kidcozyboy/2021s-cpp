cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES lesson03/Counter3.cpp lesson03/Counter3.h lesson03/q3_4.cpp)
add_executable(lesson01 ${SOURCE_FILES})