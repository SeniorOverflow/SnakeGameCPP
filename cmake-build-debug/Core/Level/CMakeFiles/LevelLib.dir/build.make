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
include Core/Level/CMakeFiles/LevelLib.dir/depend.make
# Include the progress variables for this target.
include Core/Level/CMakeFiles/LevelLib.dir/progress.make

# Include the compile flags for this target's objects.
include Core/Level/CMakeFiles/LevelLib.dir/flags.make

Core/Level/CMakeFiles/LevelLib.dir/src/Level.cpp.obj: Core/Level/CMakeFiles/LevelLib.dir/flags.make
Core/Level/CMakeFiles/LevelLib.dir/src/Level.cpp.obj: Core/Level/CMakeFiles/LevelLib.dir/includes_CXX.rsp
Core/Level/CMakeFiles/LevelLib.dir/src/Level.cpp.obj: ../Core/Level/src/Level.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Core/Level/CMakeFiles/LevelLib.dir/src/Level.cpp.obj"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LevelLib.dir\src\Level.cpp.obj -c C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Level\src\Level.cpp

Core/Level/CMakeFiles/LevelLib.dir/src/Level.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LevelLib.dir/src/Level.cpp.i"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Level\src\Level.cpp > CMakeFiles\LevelLib.dir\src\Level.cpp.i

Core/Level/CMakeFiles/LevelLib.dir/src/Level.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LevelLib.dir/src/Level.cpp.s"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Level\src\Level.cpp -o CMakeFiles\LevelLib.dir\src\Level.cpp.s

# Object files for target LevelLib
LevelLib_OBJECTS = \
"CMakeFiles/LevelLib.dir/src/Level.cpp.obj"

# External object files for target LevelLib
LevelLib_EXTERNAL_OBJECTS =

Core/Level/libLevelLib.a: Core/Level/CMakeFiles/LevelLib.dir/src/Level.cpp.obj
Core/Level/libLevelLib.a: Core/Level/CMakeFiles/LevelLib.dir/build.make
Core/Level/libLevelLib.a: Core/Level/CMakeFiles/LevelLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libLevelLib.a"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level && $(CMAKE_COMMAND) -P CMakeFiles\LevelLib.dir\cmake_clean_target.cmake
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LevelLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Core/Level/CMakeFiles/LevelLib.dir/build: Core/Level/libLevelLib.a
.PHONY : Core/Level/CMakeFiles/LevelLib.dir/build

Core/Level/CMakeFiles/LevelLib.dir/clean:
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level && $(CMAKE_COMMAND) -P CMakeFiles\LevelLib.dir\cmake_clean.cmake
.PHONY : Core/Level/CMakeFiles/LevelLib.dir/clean

Core/Level/CMakeFiles/LevelLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\DonEn\Documents\git\SnakeGameCPP C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\Level C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\Level\CMakeFiles\LevelLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Core/Level/CMakeFiles/LevelLib.dir/depend

