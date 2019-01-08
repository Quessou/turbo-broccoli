set(EXECUTABLE_NAME testReturnCoucouBrocoli)

add_executable(${EXECUTABLE_NAME} testreturncoucoubrocoli.cpp)

target_link_libraries(testReturnCoucouBrocoli ReturnCoucouBrocoli)
target_link_libraries(testReturnCoucouBrocoli gtest_main gtest pthread)

message(CMake binary dir : ${CMAKE_BINARY_DIR})
message(CMake install name dir : ${CMAKE_CURRENT_BINARY_DIR})
message("xml:${CMAKE_BINARY_DIR}/testResults/testresults_${EXECUTABLE_NAME}.xml")
add_test(
    NAME testReturnCoucouBrocoli
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${EXECUTABLE_NAME} --gtest_output=xml:${CMAKE_BINARY_DIR}/testResults/testresults_${EXECUTABLE_NAME}.xml
    )
