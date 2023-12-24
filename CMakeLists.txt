cmake_minimum_required(VERSION 3.28)

project(demo CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)

add_library(foo)
target_sources(foo
  PUBLIC
    FILE_SET CXX_MODULES FILES
      foo.cpp)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} foo)