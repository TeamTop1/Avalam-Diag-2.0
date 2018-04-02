cmake_minimum_required(VERSION 3.10)
project(diag_exe C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(diag_exe
        example/diag.c
        example/main.c
        include/avalam.h
        include/topologie.h
        lib-src/libavalam.c)
