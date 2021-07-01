cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES canvas/canvas.h canvas/canvas.cpp lesson12/Point.h lesson12/Color.h lesson12/Circle.h lesson12/ColoredCircle.h lesson12/q12_3.cpp)
add_executable(lesson01 ${SOURCE_FILES})