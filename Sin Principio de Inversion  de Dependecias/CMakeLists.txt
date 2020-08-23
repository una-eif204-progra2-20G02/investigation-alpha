cmake_minimum_required(VERSION 3.16)
project(SIN_PID)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
        Lampara.h Lampara.cpp Boton.h Boton.cpp)


add_executable(SIN_PID ${SOURCE_FILES})