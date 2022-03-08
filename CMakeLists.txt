cmake_minimum_required(VERSION 3.6)

project(cmake-print-hash 
		LANGUAGES C CXX
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

#Add this line to your root CMakefile.txt
add_subdirectory(cmake)

add_executable(test main.cpp)