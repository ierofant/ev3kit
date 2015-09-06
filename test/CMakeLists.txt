include(CTest)

add_definitions(-DBOOST_TEST_DYN_LINK)
function(ev3kit_test NAME)
    add_executable(${NAME} ${NAME}.cpp $<TARGET_OBJECTS:object>)
    target_link_libraries(${NAME} ${Boost_LIBRARIES} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
    add_test(${NAME} ${NAME})
endfunction()
