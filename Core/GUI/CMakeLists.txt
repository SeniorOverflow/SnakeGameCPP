
set(LIB_NAME GUILib)
set(DEPENDENCIES

        SDL2::Main
        SDL2::TTF
        GameLib
        StartWindowLib
        NewGameWindowLib
        SaveGameWindowLib
        LoadGameWindowLib
        SettingsWindowLib
        EscSettingsWindowLib
        CreateHostWindowLib
        EscMenuWindowLib
	EndGameWindow
        )

add_library(${LIB_NAME} STATIC)

add_subdirectory(StartWindow)
add_subdirectory(NewGameWindow)
add_subdirectory(SaveGameWindow)
add_subdirectory(LoadGameWindow)
add_subdirectory(SettingsWindow)
add_subdirectory(EscSettingsWindow)
add_subdirectory(EscMenuWindow)
add_subdirectory(EndGameWindow)
add_subdirectory(CreateHostWindow)

target_include_directories(${LIB_NAME} PUBLIC "include")


file(GLOB_RECURSE SOURCES "include/*" "src/*")
target_sources(${LIB_NAME} PRIVATE ${SOURCES})
target_link_libraries(${LIB_NAME} PUBLIC ${DEPENDENCIES} )
