cmake_minimum_required(VERSION 2.8)
project(tripping-happiness)

SET(CMAKE_CXX_COMPILER clang++)

SET(CLANG_COMPILE_FLAGS "-Wall -Werror -Wextra -Wfatal-errors --std=c++11 -g")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${CLANG_COMPILE_FLAGS}" )

#Find all cpp files recursively
file(GLOB_RECURSE SRC "src" "src/*.cpp")

add_executable(bin/interceptor ${SRC})
