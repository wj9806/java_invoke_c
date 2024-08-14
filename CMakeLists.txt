cmake_minimum_required(VERSION 3.0)
project(ADDCPP)

#set include directories
include_directories(
    /usr/lib/jvm/java-11-openjdk-amd64/include 
    /usr/lib/jvm/java-11-openjdk-amd64/include/linux
    src/test
    )

set(SRC 
    src/test/test_AddCpp.cpp
)

# set library output path
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY /lib)

add_library(AddCpp SHARED ${SRC}) 