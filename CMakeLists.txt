cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES canvas/canvas.h canvas/canvas.cpp lesson13/q13_6.cpp)
add_executable(lesson01 ${SOURCE_FILES})