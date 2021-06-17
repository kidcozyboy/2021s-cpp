cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES canvas/canvas.h canvas/canvas.cpp lesson10/Point.h lesson10/Car.h lesson10/Color.h lesson10/ColoredCar.h lesson10/q10_4.cpp)
add_executable(lesson01 ${SOURCE_FILES})