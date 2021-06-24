cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES canvas/canvas.h canvas/canvas.cpp lesson11/Array2.h lesson11/q11_2.cpp)
add_executable(lesson01 ${SOURCE_FILES})