cmake_minimum_required(VERSION 3.17)
project(td6 C)

set(CMAKE_C_STANDARD 99)

add_executable(td6 main.c mystrchrn.h mystrinv.h mystrncat.h mystrncpy.h mystrupdown.h mystrncat.c mystrncpy.c mystrchrn.c mystrinv.c mystrupdown.c)