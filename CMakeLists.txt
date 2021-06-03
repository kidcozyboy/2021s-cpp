cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES canvas/canvas.h canvas/canvas.cpp lesson08/Point.h lesson08/Shape.h lesson08/Triangle.h lesson08/Circle.h lesson08/Rect.h lesson08/q8_4.cpp lesson08/Composite.cpp lesson08/Composite.h)
add_executable(lesson01 ${SOURCE_FILES})