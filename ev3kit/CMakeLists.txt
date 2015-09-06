#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCE)
#list(REMOVE_ITEM SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ev3dev)
