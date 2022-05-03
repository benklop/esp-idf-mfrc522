cmake_minimum_required(VERSION 3.10)

file(GLOB SOURCES src/*.cpp)
idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS src include
)
