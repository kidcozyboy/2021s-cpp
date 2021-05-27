cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES lesson07/Point.h lesson07/Color.h lesson07/Car.h lesson07/ColoredCar.h lesson07/q7_3.cpp lesson07/Car1.h lesson07/Car2.h lesson07/Circle.h lesson07/ColoredCircle.h)
add_executable(lesson01 ${SOURCE_FILES})