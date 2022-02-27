cmake_minimum_required(VERSION 3.21)
project(Student C)

set(CMAKE_C_STANDARD 23)

add_executable(Student src/main.c header/marks.h src/marks.c)
include_directories(Student header)
