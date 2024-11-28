cmake_minimum_required(VERSION 3.29)
project(UFO)

set(CMAKE_CXX_STANDARD 20)

add_executable(UFO main.cpp
        ufo_functions.h
        ufo_functions.cpp)
