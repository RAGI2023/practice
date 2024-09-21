cmake_minimum_required(VERSION 3.10)  # 必须
set(CMAKE_CXX_STANDARD 14)	# C++14

project(Hello)

add_executable(hello hello.cpp main.cpp)

include_directories(./**)