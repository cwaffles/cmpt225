cmake_minimum_required(VERSION 3.5)
project(3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES EKTApp.cpp word.h node.cpp node.h btree.cpp btree.h )
add_executable(3 ${SOURCE_FILES})