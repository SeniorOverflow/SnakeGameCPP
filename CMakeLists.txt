cmake_minimum_required(VERSION 3.20)
project(SnakeGameCPP)

set(CMAKE_CXX_STANDARD 20)

link_directories("/libs/SDL")
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


target_link_libraries(SnakeGameCPP SDL2.dll)