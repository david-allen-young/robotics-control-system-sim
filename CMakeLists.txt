cmake_minimum_required(VERSION 3.14) # or higher
project(robotics-control-system-sim VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
option(BUILD_TESTS "Build unit tests" OFF)
add_subdirectory(src)
add_subdirectory(launch)
if(BUILD_TESTS)
	enable_testing()
	add_subdirectory(tests)
endif()

