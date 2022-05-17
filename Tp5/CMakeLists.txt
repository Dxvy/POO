cmake_minimum_required(VERSION 3.21)
project(Tp5)


include_directories(${PROJECT_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCE ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/include/*.h )

add_executable(Tp5 ${SOURCE})