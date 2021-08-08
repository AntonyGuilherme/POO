cmake_minimum_required(VERSION 3.19)
project(semanat_Ponto)

set(CMAKE_CXX_STANDARD 14)

add_executable(semanat_Ponto main.cpp Ponto/Ponto2D.h Ponto3D/Ponto3D.cpp Ponto3D/Ponto3D.h)