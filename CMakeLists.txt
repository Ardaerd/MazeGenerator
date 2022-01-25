cmake_minimum_required(VERSION 3.20)
project(Maze_Generator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Maze_Generator main.cpp Node.h Node.cpp Graph.cpp Graph.h Cell.h Cell.cpp DFS.h DFS.cpp)
