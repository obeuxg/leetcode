# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/obeux/Downloads/clion-2021.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/obeux/Downloads/clion-2021.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/obeux/CLionProjects/leetcode/T160

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/obeux/CLionProjects/leetcode/T160/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/T160.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/T160.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/T160.dir/flags.make

CMakeFiles/T160.dir/main.cpp.o: CMakeFiles/T160.dir/flags.make
CMakeFiles/T160.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obeux/CLionProjects/leetcode/T160/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/T160.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/T160.dir/main.cpp.o -c /home/obeux/CLionProjects/leetcode/T160/main.cpp

CMakeFiles/T160.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/T160.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obeux/CLionProjects/leetcode/T160/main.cpp > CMakeFiles/T160.dir/main.cpp.i

CMakeFiles/T160.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/T160.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obeux/CLionProjects/leetcode/T160/main.cpp -o CMakeFiles/T160.dir/main.cpp.s

# Object files for target T160
T160_OBJECTS = \
"CMakeFiles/T160.dir/main.cpp.o"

# External object files for target T160
T160_EXTERNAL_OBJECTS =

T160: CMakeFiles/T160.dir/main.cpp.o
T160: CMakeFiles/T160.dir/build.make
T160: CMakeFiles/T160.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/obeux/CLionProjects/leetcode/T160/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable T160"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/T160.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/T160.dir/build: T160

.PHONY : CMakeFiles/T160.dir/build

CMakeFiles/T160.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/T160.dir/cmake_clean.cmake
.PHONY : CMakeFiles/T160.dir/clean

CMakeFiles/T160.dir/depend:
	cd /home/obeux/CLionProjects/leetcode/T160/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/obeux/CLionProjects/leetcode/T160 /home/obeux/CLionProjects/leetcode/T160 /home/obeux/CLionProjects/leetcode/T160/cmake-build-debug /home/obeux/CLionProjects/leetcode/T160/cmake-build-debug /home/obeux/CLionProjects/leetcode/T160/cmake-build-debug/CMakeFiles/T160.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/T160.dir/depend

