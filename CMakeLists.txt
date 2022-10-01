cmake_minimum_required(VERSION 3.10)

# setting a project name 
project(BusTripsManagerSystem)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)



# the executable 
add_executable(bus_trips_manager_system ./src/main.cpp)