cmake_minimum_required(VERSION 3.29)
project(Chess C)

set(CMAKE_C_STANDARD 11)

add_executable(Chess main.c
        Piezas/Rey.cpp
        Piezas/Reina.cpp
        Piezas/Peon.cpp
        Piezas/Caballo.cpp
        Piezas/Alfil.cpp
        Piezas/tablero.cpp
        Piezas/Rey.h
        Piezas/Reina.h
        Piezas/Alfil.h
        Piezas/Torre.h
        Piezas/Peon.h
        Piezas/Caballo.h
        Piezas/Torre.cpp
)
