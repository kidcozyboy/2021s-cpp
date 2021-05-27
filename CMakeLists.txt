cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES lesson07/Point.h canvas/canvas.h canvas/canvas.cpp lesson07/Color.h lesson07/q7_4.cpp lesson07/Circle.h lesson07/ColoredCircle.h lesson07/q7_4.cpp test/7/Car1.h)
add_executable(lesson01 ${SOURCE_FILES})