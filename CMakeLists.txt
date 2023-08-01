cmake_minimum_required(VERSION 3.14)
project(first_steps)

# Googletest requires at least cpp 14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

