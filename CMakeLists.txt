cmake_minimum_required(VERSION 3.20)
project(MargaritaTheBest C)

set(CMAKE_C_STANDARD 11)

add_executable(MargaritaTheBest main.c libs/data_structures/vector/vector.c libs/data_structures/vector/vector.h)

add_subdirectory(libs)
target_link_libraries(MargaritaTheBest data_structures)