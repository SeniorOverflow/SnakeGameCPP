# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\DonEn\Documents\git\SnakeGameCPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SnakeGame.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SnakeGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SnakeGame.dir/flags.make

CMakeFiles/SnakeGame.dir/main.cpp.obj: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/main.cpp.obj: CMakeFiles/SnakeGame.dir/includes_CXX.rsp
CMakeFiles/SnakeGame.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SnakeGame.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SnakeGame.dir\main.cpp.obj -c C:\Users\DonEn\Documents\git\SnakeGameCPP\main.cpp

CMakeFiles/SnakeGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\DonEn\Documents\git\SnakeGameCPP\main.cpp > CMakeFiles\SnakeGame.dir\main.cpp.i

CMakeFiles/SnakeGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\DonEn\Documents\git\SnakeGameCPP\main.cpp -o CMakeFiles\SnakeGame.dir\main.cpp.s

# Object files for target SnakeGame
SnakeGame_OBJECTS = \
"CMakeFiles/SnakeGame.dir/main.cpp.obj"

# External object files for target SnakeGame
SnakeGame_EXTERNAL_OBJECTS =

SnakeGame.exe: CMakeFiles/SnakeGame.dir/main.cpp.obj
SnakeGame.exe: CMakeFiles/SnakeGame.dir/build.make
SnakeGame.exe: C:/mingw64/lib/libSDL2main.a
SnakeGame.exe: C:/mingw64/lib/libSDL2.dll.a
SnakeGame.exe: C:/mingw64/lib/libSDL2_ttf.dll.a
SnakeGame.exe: Core/Apple/libAppleLib.a
SnakeGame.exe: Core/Enemy/libEnemyLib.a
SnakeGame.exe: Core/Food/libFoodLib.a
SnakeGame.exe: Core/Game/libGameLib.a
SnakeGame.exe: Core/GUI/libGUILib.a
SnakeGame.exe: Core/IGameObject/libIGameObjectLib.a
SnakeGame.exe: Core/Level/libLevelLib.a
SnakeGame.exe: Core/Player/libPlayerLib.a
SnakeGame.exe: Core/Snake/libSnakeLib.a
SnakeGame.exe: Core/Spawner/libSpawnerLib.a
SnakeGame.exe: Core/Trigger/libTriggerLib.a
SnakeGame.exe: Core/Enemy/libEnemyLib.a
SnakeGame.exe: Core/Food/libFoodLib.a
SnakeGame.exe: Core/Game/libGameLib.a
SnakeGame.exe: Core/Level/libLevelLib.a
SnakeGame.exe: Core/Snake/libSnakeLib.a
SnakeGame.exe: Core/Spawner/libSpawnerLib.a
SnakeGame.exe: Core/Trigger/libTriggerLib.a
SnakeGame.exe: Core/IGameObject/libIGameObjectLib.a
SnakeGame.exe: Core/Player/libPlayerLib.a
SnakeGame.exe: Core/GUI/libGUILib.a
SnakeGame.exe: Core/GUI/StartWindow/libStartWindowLib.a
SnakeGame.exe: Core/GUI/NewGameWindow/libNewGameWindowLib.a
SnakeGame.exe: Core/GUI/SaveGameWindow/libSaveGameWindowLib.a
SnakeGame.exe: Core/GUI/LoadGameWindow/libLoadGameWindowLib.a
SnakeGame.exe: Core/GUI/SettingsWindow/libSettingsWindowLib.a
SnakeGame.exe: Core/GUI/EscSettingsWindow/libEscSettingsWindowLib.a
SnakeGame.exe: Core/GUI/CreateHostWindow/libCreateHostWindowLib.a
SnakeGame.exe: Core/GUI/EscMenuWindow/libEscMenuWindowLib.a
SnakeGame.exe: Core/GUI/libGUILib.a
SnakeGame.exe: Core/GUI/StartWindow/libStartWindowLib.a
SnakeGame.exe: Core/GUI/NewGameWindow/libNewGameWindowLib.a
SnakeGame.exe: Core/GUI/SaveGameWindow/libSaveGameWindowLib.a
SnakeGame.exe: Core/GUI/LoadGameWindow/libLoadGameWindowLib.a
SnakeGame.exe: Core/GUI/SettingsWindow/libSettingsWindowLib.a
SnakeGame.exe: Core/GUI/EscSettingsWindow/libEscSettingsWindowLib.a
SnakeGame.exe: Core/GUI/CreateHostWindow/libCreateHostWindowLib.a
SnakeGame.exe: Core/GUI/EscMenuWindow/libEscMenuWindowLib.a
SnakeGame.exe: C:/mingw64/lib/libSDL2_ttf.dll.a
SnakeGame.exe: C:/mingw64/lib/libSDL2main.a
SnakeGame.exe: C:/mingw64/lib/libSDL2.dll.a
SnakeGame.exe: CMakeFiles/SnakeGame.dir/linklibs.rsp
SnakeGame.exe: CMakeFiles/SnakeGame.dir/objects1.rsp
SnakeGame.exe: CMakeFiles/SnakeGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SnakeGame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SnakeGame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SnakeGame.dir/build: SnakeGame.exe
.PHONY : CMakeFiles/SnakeGame.dir/build

CMakeFiles/SnakeGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SnakeGame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SnakeGame.dir/clean

CMakeFiles/SnakeGame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\DonEn\Documents\git\SnakeGameCPP C:\Users\DonEn\Documents\git\SnakeGameCPP C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles\SnakeGame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SnakeGame.dir/depend

