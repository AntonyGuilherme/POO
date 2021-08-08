cmake_minimum_required(VERSION 3.19)
project(Semana7_Traveler)

set(CMAKE_CXX_STANDARD 14)

add_executable(Semana7_Traveler main.cpp Pager/Pager.cpp Pager/Pager.h Traveler/Traveler.cpp Traveler/Traveler.h BusinessTraveler/BusinessTraveller.cpp BusinessTraveler/BusinessTraveller.h)