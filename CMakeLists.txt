cmake_minimum_required(VERSION 3.26)
project(Openclassrooms)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Openclassrooms main.cpp
        Personnage.cpp
        Personnage.h
        Arme.cpp
        Arme.h)
