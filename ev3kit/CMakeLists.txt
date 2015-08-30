aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCE)
list(REMOVE_ITEM SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_library(object OBJECT ${SOURCE})

add_executable(${PROJECT_NAME} $<TARGET_OBJECTS:object> main.cpp)
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
