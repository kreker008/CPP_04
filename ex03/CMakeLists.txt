cmake_minimum_required(VERSION 3.16)
project(ex03)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)


AUX_SOURCE_DIRECTORY(. SRC)

add_executable(ex_01
        ${SRC}
        )
