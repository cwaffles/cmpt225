cmake_minimum_required(VERSION 3.5)
project(2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES BankSimApp.cpp Event.cpp Event.h Queue.cpp Queue.h PQueue.cpp PQueue.h Node.cpp Node.h EmptyDataCollectionException.h EmptyDataCollectionException.cpp)
add_executable(2 ${SOURCE_FILES})