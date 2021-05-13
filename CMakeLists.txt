cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES lesson05/Complex1.cpp lesson05/Complex1.h lesson05/q5_1.cpp)
add_executable(lesson01 ${SOURCE_FILES})