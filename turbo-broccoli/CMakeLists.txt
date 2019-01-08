cmake_minimum_required(VERSION 2.8)

project(turbo-broccoli)

enable_testing()

include_directories ("${PROJECT_SOURCE_DIR}/ReturnCoucouBrocoli")
include_directories("${PROJECT_SOURCE_DIR}/main")
add_subdirectory(main)
add_subdirectory(ReturnCoucouBrocoli)

configure_file(runTests.sh "${CMAKE_BINARY_DIR}/runTests.sh")

# Debug messages
message("================================================")
message("executable out path : " ${EXECUTABLE_OUTPUT_PATH})
message("cmake binary dir : " ${CMAKE_BINARY_DIR})
message("runtime output directory :" ${RUNTIME_OUTPUT_DIRECTORY})
message("================================================")
