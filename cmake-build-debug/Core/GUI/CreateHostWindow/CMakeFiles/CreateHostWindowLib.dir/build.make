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
include Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/depend.make
# Include the progress variables for this target.
include Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/progress.make

# Include the compile flags for this target's objects.
include Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/flags.make

Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.obj: Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/flags.make
Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.obj: Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/includes_CXX.rsp
Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.obj: ../Core/GUI/CreateHostWindow/src/CreateHostWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.obj"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CreateHostWindowLib.dir\src\CreateHostWindow.cpp.obj -c C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI\CreateHostWindow\src\CreateHostWindow.cpp

Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.i"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI\CreateHostWindow\src\CreateHostWindow.cpp > CMakeFiles\CreateHostWindowLib.dir\src\CreateHostWindow.cpp.i

Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.s"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI\CreateHostWindow\src\CreateHostWindow.cpp -o CMakeFiles\CreateHostWindowLib.dir\src\CreateHostWindow.cpp.s

# Object files for target CreateHostWindowLib
CreateHostWindowLib_OBJECTS = \
"CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.obj"

# External object files for target CreateHostWindowLib
CreateHostWindowLib_EXTERNAL_OBJECTS =

Core/GUI/CreateHostWindow/libCreateHostWindowLib.a: Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/src/CreateHostWindow.cpp.obj
Core/GUI/CreateHostWindow/libCreateHostWindowLib.a: Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/build.make
Core/GUI/CreateHostWindow/libCreateHostWindowLib.a: Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libCreateHostWindowLib.a"
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow && $(CMAKE_COMMAND) -P CMakeFiles\CreateHostWindowLib.dir\cmake_clean_target.cmake
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CreateHostWindowLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/build: Core/GUI/CreateHostWindow/libCreateHostWindowLib.a
.PHONY : Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/build

Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/clean:
	cd /d C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow && $(CMAKE_COMMAND) -P CMakeFiles\CreateHostWindowLib.dir\cmake_clean.cmake
.PHONY : Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/clean

Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\DonEn\Documents\git\SnakeGameCPP C:\Users\DonEn\Documents\git\SnakeGameCPP\Core\GUI\CreateHostWindow C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow C:\Users\DonEn\Documents\git\SnakeGameCPP\cmake-build-debug\Core\GUI\CreateHostWindow\CMakeFiles\CreateHostWindowLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Core/GUI/CreateHostWindow/CMakeFiles/CreateHostWindowLib.dir/depend
