cmake_minimum_required(VERSION 3.19)
project(ENGR120_Lab3 C)

set(CMAKE_C_STANDARD 99)

add_executable(ENGR120_Lab3 main.c)

target_link_libraries(ENGR120_Lab3 m)