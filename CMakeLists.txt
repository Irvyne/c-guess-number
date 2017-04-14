cmake_minimum_required(VERSION 3.7)
project(game_guess_number)

set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES main.c)

add_executable(game_guess_number ${SOURCE_FILES})
