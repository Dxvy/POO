cmake_minimum_required(VERSION 3.21)
project(Tp5)

include_directories(/Tp5/include)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCE ${CMAKE_SOURCE_DIR} src/*.cpp include/*.h)

add_executable(Tp5 ${SOURCE})