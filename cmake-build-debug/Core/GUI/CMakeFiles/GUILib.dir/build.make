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
include Core/GUI/CMakeFiles/GUILib.dir/depend.make
# Include the progress variables for this target.
include Core/GUI/CMakeFiles/GUILib.dir/progress.make

# Include the compile flags for this target's objects.
include Core/GUI/CMakeFiles/GUILib.dir/flags.make

Core/GUI/CMakeFiles/GUILib.dir/src/GUI.cpp.obj: Core/GUI/CMakeFiles/GUILib.dir/flags.make
Core/GUI/CMakeFiles/GUILib.dir/src/GUI.cpp.obj: Core/GUI/CMakeFiles/GUILib.dir/includes_CXX.rsp
Core/GUI/CMakeFiles/GUILib.dir/src/GUI.cpp.obj: ../Core/GUI/src/GUI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Core/GUI/CMakeFiles/GUILib.dir/src/GUI.cpp.obj"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GUILib.dir\src\GUI.cpp.obj -c C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI\src\GUI.cpp

Core/GUI/CMakeFiles/GUILib.dir/src/GUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUILib.dir/src/GUI.cpp.i"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI\src\GUI.cpp > CMakeFiles\GUILib.dir\src\GUI.cpp.i

Core/GUI/CMakeFiles/GUILib.dir/src/GUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUILib.dir/src/GUI.cpp.s"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI\src\GUI.cpp -o CMakeFiles\GUILib.dir\src\GUI.cpp.s

# Object files for target GUILib
GUILib_OBJECTS = \
"CMakeFiles/GUILib.dir/src/GUI.cpp.obj"

# External object files for target GUILib
GUILib_EXTERNAL_OBJECTS =

Core/GUI/libGUILib.a: Core/GUI/CMakeFiles/GUILib.dir/src/GUI.cpp.obj
Core/GUI/libGUILib.a: Core/GUI/CMakeFiles/GUILib.dir/build.make
Core/GUI/libGUILib.a: Core/GUI/CMakeFiles/GUILib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libGUILib.a"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI && $(CMAKE_COMMAND) -P CMakeFiles\GUILib.dir\cmake_clean_target.cmake
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GUILib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Core/GUI/CMakeFiles/GUILib.dir/build: Core/GUI/libGUILib.a
.PHONY : Core/GUI/CMakeFiles/GUILib.dir/build

Core/GUI/CMakeFiles/GUILib.dir/clean:
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI && $(CMAKE_COMMAND) -P CMakeFiles\GUILib.dir\cmake_clean.cmake
.PHONY : Core/GUI/CMakeFiles/GUILib.dir/clean

Core/GUI/CMakeFiles/GUILib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\DonEn\Documents\git\SnakeGameCPP C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CMakeFiles\GUILib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Core/GUI/CMakeFiles/GUILib.dir/depend

