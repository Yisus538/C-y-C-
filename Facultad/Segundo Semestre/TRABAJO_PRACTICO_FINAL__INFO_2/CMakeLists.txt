cmake_minimum_required(VERSION 3.26)
project(TRABAJO_PRACTICO_FINAL__INFO_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TRABAJO_PRACTICO_FINAL__INFO_2
        data_set.txt
        libreria.cpp
        libreria.h
        main.cpp)
