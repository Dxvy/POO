cmake_minimum_required(VERSION 3.21)
project(Tp5)

<<<<<<< HEAD
include_directories(Tp5/include)
=======
include_directories(/Tp5/include)
>>>>>>> b39acd90c767a8bbb9a9d97be7e0bd37de479816

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCE ${CMAKE_SOURCE_DIR} src/*.cpp include/*.h)

add_executable(Tp5 ${SOURCE})