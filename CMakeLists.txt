cmake_minimum_required(VERSION 3.20)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 20)
# Add SDL2 CMake modules
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)
find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)

add_subdirectory(Core)

add_executable(${PROJECT_NAME} main.cpp
        )

target_link_libraries(${PROJECT_NAME}
        ${SDL2_LIBRARIES}
        SDL2::TTF
        AppleLib
        EnemyLib
        FoodLib
        GameLib
        GUILib
        IGameObjectLib
        LevelLib
        PlayerLib
        SnakeLib
        SpawnerLib
        TriggerLib
        )
