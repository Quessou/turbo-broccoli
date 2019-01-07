cmake_minimum_required(VERSION 2.8)

project(turbo-broccoli)

include_directories ("${PROJECT_SOURCE_DIR}/ReturnCoucouBrocoli")
include_directories("${PROJECT_SOURCE_DIR}/main")
#include_directories("${PROJECT_SOURCE_DIR}/TestReturnCoucouBrocoli")
add_subdirectory(main)
add_subdirectory(ReturnCoucouBrocoli)
#add_subdirectory(TestReturnCoucouBrocoli)

#add_executable(${PROJECT_NAME} "main.cpp")
#target_link_libraries(${PROJECT_NAME} ReturnCoucouBrocoli)
message("================================================")
message("executable out path : " ${EXECUTABLE_OUTPUT_PATH})
message("cmake binary dir : " ${CMAKE_BINARY_DIR})
message("runtime output directory :" ${RUNTIME_OUTPUT_DIRECTORY})
message("================================================")
