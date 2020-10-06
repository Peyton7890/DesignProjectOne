cmake_minimum_required(VERSION 3.17)
project(Fuck2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Fuck2
        main.cpp
        people.cpp
        people.h
        reservation.cpp
        reservation.h
        vehicles.cpp
        vehicles.h)
