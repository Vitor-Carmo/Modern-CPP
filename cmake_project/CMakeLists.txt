project(cmake_test_project)
cmake_minimum_required(VERSION 3.0)

message(STATUS "!!!!!!!!!!!!!!!!!! ${PROJECT_SOURCE_DIR}" )

# headers folders
include_directories(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)


# to build go to /build folder and run `cmake ..`