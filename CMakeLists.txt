cmake_minimum_required(VERSION 3.13)
project(cmake_testapp)
set(CMAKE_CXX_STANDARD 14)
add_executable(cmake_testapp main.cpp compact.cpp compact.h people.cpp people.h pickup.cpp pickup.h quidditch_team.dat reservation.cpp reservation.h sedan.cpp sedan.h vehicles.h vehicles.cpp)
