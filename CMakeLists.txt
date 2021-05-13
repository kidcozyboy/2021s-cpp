cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES lesson05/Complex.cpp lesson05/Complex.h lesson05/q5_3.cpp)
add_executable(lesson01 ${SOURCE_FILES})