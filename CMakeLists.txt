cmake_minimum_required(VERSION 3.10)
project(linkedlist)

set(CMAKE_CXX_STANDARD 11)

add_executable(linkedlist src/main.cpp
            src/Node.hpp
            src/Node.cpp
            src/LinkedList.hpp
            src/LinkedList.cpp
)
