# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/zmx19991223/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/zmx19991223/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/f/untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/f/untitled/cmake-build-debug-cygwin

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/Coordinate.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/Coordinate.cpp.o: ../Coordinate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/f/untitled/cmake-build-debug-cygwin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/Coordinate.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/Coordinate.cpp.o -c /cygdrive/f/untitled/Coordinate.cpp

CMakeFiles/untitled.dir/Coordinate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/Coordinate.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/f/untitled/Coordinate.cpp > CMakeFiles/untitled.dir/Coordinate.cpp.i

CMakeFiles/untitled.dir/Coordinate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/Coordinate.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/f/untitled/Coordinate.cpp -o CMakeFiles/untitled.dir/Coordinate.cpp.s

CMakeFiles/untitled.dir/main.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/f/untitled/cmake-build-debug-cygwin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/main.cpp.o -c /cygdrive/f/untitled/main.cpp

CMakeFiles/untitled.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/f/untitled/main.cpp > CMakeFiles/untitled.dir/main.cpp.i

CMakeFiles/untitled.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/f/untitled/main.cpp -o CMakeFiles/untitled.dir/main.cpp.s

CMakeFiles/untitled.dir/Line.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/Line.cpp.o: ../Line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/f/untitled/cmake-build-debug-cygwin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled.dir/Line.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/Line.cpp.o -c /cygdrive/f/untitled/Line.cpp

CMakeFiles/untitled.dir/Line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/Line.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/f/untitled/Line.cpp > CMakeFiles/untitled.dir/Line.cpp.i

CMakeFiles/untitled.dir/Line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/Line.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/f/untitled/Line.cpp -o CMakeFiles/untitled.dir/Line.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/Coordinate.cpp.o" \
"CMakeFiles/untitled.dir/main.cpp.o" \
"CMakeFiles/untitled.dir/Line.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled.exe: CMakeFiles/untitled.dir/Coordinate.cpp.o
untitled.exe: CMakeFiles/untitled.dir/main.cpp.o
untitled.exe: CMakeFiles/untitled.dir/Line.cpp.o
untitled.exe: CMakeFiles/untitled.dir/build.make
untitled.exe: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/f/untitled/cmake-build-debug-cygwin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable untitled.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled.exe

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd /cygdrive/f/untitled/cmake-build-debug-cygwin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/f/untitled /cygdrive/f/untitled /cygdrive/f/untitled/cmake-build-debug-cygwin /cygdrive/f/untitled/cmake-build-debug-cygwin /cygdrive/f/untitled/cmake-build-debug-cygwin/CMakeFiles/untitled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend

