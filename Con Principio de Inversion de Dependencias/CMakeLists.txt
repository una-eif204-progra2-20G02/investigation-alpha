cmake_minimum_required(VERSION 3.16)
project(Con_Principio_de_Inversion_de_Dependencias)

set(CMAKE_CXX_STANDARD 14)

add_executable(Con_Principio_de_Inversion_de_Dependencias main.cpp Boton.cpp Boton.h IInteruptor.cpp IInteruptor.h Lampara.cpp Lampara.h)