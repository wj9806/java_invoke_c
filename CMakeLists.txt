cmake_minimum_required(VERSION 3.0)
project(JIC)

#set include directories
include_directories(
    /usr/lib/jvm/java-11-openjdk-amd64/include 
    /usr/lib/jvm/java-11-openjdk-amd64/include/linux
    cpp
)

set(SRC 
    cpp/test_AddCpp.cpp 
    cpp/test_MyClassWrapper.cpp 
    cpp/test_ReturnArray.cpp
)

# set library output path
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY /lib)

add_library(jic SHARED ${SRC}) 