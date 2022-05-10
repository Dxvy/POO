cmake_minimum_required(VERSION 3.21)
project(Tp4)

include_directories(C:/Users/davym/Downloads/Ynov/POO/Exercices/Tp4/include)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCE ${CMAKE_SOURCE_DIR} src/*.cpp include/*.h)

add_executable(Tp4 ${SOURCE})