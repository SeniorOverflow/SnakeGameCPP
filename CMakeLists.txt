cmake_minimum_required(VERSION 3.20)
project(SnakeGameCPP)

set(CMAKE_CXX_STANDARD 20)
find_package(SDL2 REQUIRED)

add_executable(SnakeGameCPP main.cpp
        Game.h
        Game.cpp
        IGameObject.cpp
        IGameObject.h
        Apple.h
        Apple.cpp
        Enemy.cpp
        Enemy.h
        Food.cpp
        Food.h
        GameTypes.h
        Level.h
        Level.cpp
        Snake.cpp
        Snake.h
        Trigger.cpp
        Trigger.h
        Spawner.cpp
        Spawner.h
        )

include_directories(SnakeGameCPP ${SDL2_INCLUDE_DIRS})
target_link_libraries(SnakeGameCPP   ${SDL2_LIBRARIES})





