# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/feng/gpf_ws/dl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/feng/gpf_ws/dl/build

# Include any dependencies generated for this target.
include CMakeFiles/sample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sample.dir/flags.make

CMakeFiles/sample.dir/src/sample.cpp.o: CMakeFiles/sample.dir/flags.make
CMakeFiles/sample.dir/src/sample.cpp.o: ../src/sample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/feng/gpf_ws/dl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sample.dir/src/sample.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample.dir/src/sample.cpp.o -c /home/feng/gpf_ws/dl/src/sample.cpp

CMakeFiles/sample.dir/src/sample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample.dir/src/sample.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/feng/gpf_ws/dl/src/sample.cpp > CMakeFiles/sample.dir/src/sample.cpp.i

CMakeFiles/sample.dir/src/sample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample.dir/src/sample.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/feng/gpf_ws/dl/src/sample.cpp -o CMakeFiles/sample.dir/src/sample.cpp.s

CMakeFiles/sample.dir/src/sample.cpp.o.requires:

.PHONY : CMakeFiles/sample.dir/src/sample.cpp.o.requires

CMakeFiles/sample.dir/src/sample.cpp.o.provides: CMakeFiles/sample.dir/src/sample.cpp.o.requires
	$(MAKE) -f CMakeFiles/sample.dir/build.make CMakeFiles/sample.dir/src/sample.cpp.o.provides.build
.PHONY : CMakeFiles/sample.dir/src/sample.cpp.o.provides

CMakeFiles/sample.dir/src/sample.cpp.o.provides.build: CMakeFiles/sample.dir/src/sample.cpp.o


# Object files for target sample
sample_OBJECTS = \
"CMakeFiles/sample.dir/src/sample.cpp.o"

# External object files for target sample
sample_EXTERNAL_OBJECTS =

sample: CMakeFiles/sample.dir/src/sample.cpp.o
sample: CMakeFiles/sample.dir/build.make
sample: CMakeFiles/sample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/feng/gpf_ws/dl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sample.dir/build: sample

.PHONY : CMakeFiles/sample.dir/build

CMakeFiles/sample.dir/requires: CMakeFiles/sample.dir/src/sample.cpp.o.requires

.PHONY : CMakeFiles/sample.dir/requires

CMakeFiles/sample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sample.dir/clean

CMakeFiles/sample.dir/depend:
	cd /home/feng/gpf_ws/dl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/feng/gpf_ws/dl /home/feng/gpf_ws/dl /home/feng/gpf_ws/dl/build /home/feng/gpf_ws/dl/build /home/feng/gpf_ws/dl/build/CMakeFiles/sample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sample.dir/depend

