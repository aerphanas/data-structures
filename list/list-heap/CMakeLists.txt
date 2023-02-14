cmake_minimum_required(VERSION 3.5)

project(list-heap LANGUAGES C)

add_executable(list-heap main.c)

install(TARGETS list-heap
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
