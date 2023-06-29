
set(LIB_NAME EnemyLib)
set(DEPENDENCIES

        SDL2::Main
        SDL2::TTF
        TriggerLib
        GameLib
        IGameObjectLib
        )

add_library(${LIB_NAME} STATIC)

target_include_directories(${LIB_NAME} PUBLIC "include")


file(GLOB_RECURSE SOURCES "include/*" "src/*")
target_sources(${LIB_NAME} PRIVATE ${SOURCES})
target_link_libraries(${LIB_NAME} PUBLIC ${DEPENDENCIES})
