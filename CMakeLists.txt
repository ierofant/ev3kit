project(ev3kit CXX)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS -std=c++11)
set(ROOT_PREDEPENDENCIES ${CMAKE_BINARY_DIR}/predependencies)
include_directories(${CMAKE_SOURCE_DIR} ${ROOT_PREDEPENDENCIES}/include)

add_subdirectory(3rdparty)
add_Subdirectory(ev3dev-lang)
add_subdirectory(${PROJECT_NAME})
#add_subdirectory(test)
