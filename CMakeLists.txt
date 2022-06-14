cmake_minimum_required(VERSION 3.22)
project(SnakeGameCPP)

set(CMAKE_CXX_STANDARD 20)

find_package(SDL2)
add_executable(SnakeGameCPP main.cpp
        Apple.h
        Apple.cpp
        Game.h
        Game.cpp
        IGameObject.h
        IGameObject.cpp
        Food.cpp
        Food.h
        )

