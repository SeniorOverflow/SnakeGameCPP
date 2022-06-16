cmake_minimum_required(VERSION 3.20)
project(SnakeGameCPP)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/libs/SDL2/bin/)
link_directories(${CMAKE_SOURCE_DIR}/libs/SDL2/bin/)

link_directories(${CMAKE_SOURCE_DIR}/libs/SDL2/lib/)

include_directories(${CMAKE_SOURCE_DIR}/libs/SDL2/include/)
link_directories(${CMAKE_SOURCE_DIR}/libs/SDL2/include/)

add_executable(SnakeGameCPP main.cpp
        Game.h
        Game.cpp
        IGameObject.cpp
        IGameObject.h
        Apple.h
        Apple.cpp
        Food.cpp
        Food.h
        GameTypes.h
        Level.h
        Level.cpp
        Snake.cpp
        Snake.h
        )

target_link_libraries(SnakeGameCPP  mingw32 SDL2main SDL2)



