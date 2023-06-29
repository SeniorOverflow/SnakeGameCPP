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
include Core/Game/CMakeFiles/GameLib.dir/depend.make
# Include the progress variables for this target.
include Core/Game/CMakeFiles/GameLib.dir/progress.make

# Include the compile flags for this target's objects.
include Core/Game/CMakeFiles/GameLib.dir/flags.make

Core/Game/CMakeFiles/GameLib.dir/src/Game.cpp.obj: Core/Game/CMakeFiles/GameLib.dir/flags.make
Core/Game/CMakeFiles/GameLib.dir/src/Game.cpp.obj: Core/Game/CMakeFiles/GameLib.dir/includes_CXX.rsp
Core/Game/CMakeFiles/GameLib.dir/src/Game.cpp.obj: ../Core/Game/src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Core/Game/CMakeFiles/GameLib.dir/src/Game.cpp.obj"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameLib.dir\src\Game.cpp.obj -c C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Game\src\Game.cpp

Core/Game/CMakeFiles/GameLib.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameLib.dir/src/Game.cpp.i"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Game\src\Game.cpp > CMakeFiles\GameLib.dir\src\Game.cpp.i

Core/Game/CMakeFiles/GameLib.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameLib.dir/src/Game.cpp.s"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Game\src\Game.cpp -o CMakeFiles\GameLib.dir\src\Game.cpp.s

# Object files for target GameLib
GameLib_OBJECTS = \
"CMakeFiles/GameLib.dir/src/Game.cpp.obj"

# External object files for target GameLib
GameLib_EXTERNAL_OBJECTS =

Core/Game/libGameLib.a: Core/Game/CMakeFiles/GameLib.dir/src/Game.cpp.obj
Core/Game/libGameLib.a: Core/Game/CMakeFiles/GameLib.dir/build.make
Core/Game/libGameLib.a: Core/Game/CMakeFiles/GameLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libGameLib.a"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game && $(CMAKE_COMMAND) -P CMakeFiles\GameLib.dir\cmake_clean_target.cmake
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GameLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Core/Game/CMakeFiles/GameLib.dir/build: Core/Game/libGameLib.a
.PHONY : Core/Game/CMakeFiles/GameLib.dir/build

Core/Game/CMakeFiles/GameLib.dir/clean:
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game && $(CMAKE_COMMAND) -P CMakeFiles\GameLib.dir\cmake_clean.cmake
.PHONY : Core/Game/CMakeFiles/GameLib.dir/clean

Core/Game/CMakeFiles/GameLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\DonEn\Documents\git\SnakeGameCPP C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Game C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Game\CMakeFiles\GameLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Core/Game/CMakeFiles/GameLib.dir/depend

