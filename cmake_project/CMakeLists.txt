project(cmake_test_project)
cmake_minimum_required(VERSION 3.0)


message(STATUS "!!!!!!!!!!!!!!!!!! ${PROJECT_SOURCE_DIR}" )

# headers folders to found with <hello.h> 
include_directories(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

enable_testing() # have to do it on the TOP-MOST cmake
add_subdirectory(tests)


# to build go to /build folder and run `cmake ..`