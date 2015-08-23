project(ev3kit CXX)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS -std=c++11)

add_subdirectory(3rdparty)
add_subdirectory(${PROJECT_NAME})
