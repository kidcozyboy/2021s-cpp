cmake_minimum_required(VERSION 3.17)
project(prog2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES canvas/canvas.h canvas/canvas.cpp lesson09/q9_4.cpp lesson09/BidirectionalCell.h lesson09/BidirectionalList.cpp lesson09/BidirectionalList.h)
add_executable(lesson01 ${SOURCE_FILES})