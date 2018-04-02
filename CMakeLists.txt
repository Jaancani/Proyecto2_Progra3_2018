cmake_minimum_required(VERSION 3.8)
project(Proyecto)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Nodo.cpp Nodo.h Matriz.cpp Matriz.h)
add_executable(Proyecto ${SOURCE_FILES})