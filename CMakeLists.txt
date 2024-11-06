cmake_minimum_required(VERSION 3.29)
project(Chess C)

set(CMAKE_C_STANDARD 11)

add_executable(Chess main.c
        Piezas/Torre.cpp
        Piezas/Rey.cpp
        Piezas/Reina.cpp
        Piezas/Peon.cpp
        Piezas/Caballo.cpp
        Piezas/Alfil.cpp)
