cmake_minimum_required(VERSION 3.3)
project(ucd_csci2312_pa1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        Point.cpp
        area.cpp
        Point.h
        PointTests.cpp
        PointTests.h
        ErrorContext.cpp
        ErrorContext.h)

add_executable(ucd_csci2312_pa1 ${SOURCE_FILES} )