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
CMAKE_SOURCE_DIR = /home/obeux/CLionProjects/leetcode/O44

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/obeux/CLionProjects/leetcode/O44/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/O44.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/O44.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/O44.dir/flags.make

CMakeFiles/O44.dir/main.cpp.o: CMakeFiles/O44.dir/flags.make
CMakeFiles/O44.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obeux/CLionProjects/leetcode/O44/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/O44.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/O44.dir/main.cpp.o -c /home/obeux/CLionProjects/leetcode/O44/main.cpp

CMakeFiles/O44.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/O44.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obeux/CLionProjects/leetcode/O44/main.cpp > CMakeFiles/O44.dir/main.cpp.i

CMakeFiles/O44.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/O44.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obeux/CLionProjects/leetcode/O44/main.cpp -o CMakeFiles/O44.dir/main.cpp.s

# Object files for target O44
O44_OBJECTS = \
"CMakeFiles/O44.dir/main.cpp.o"

# External object files for target O44
O44_EXTERNAL_OBJECTS =

O44: CMakeFiles/O44.dir/main.cpp.o
O44: CMakeFiles/O44.dir/build.make
O44: CMakeFiles/O44.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/obeux/CLionProjects/leetcode/O44/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable O44"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/O44.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/O44.dir/build: O44

.PHONY : CMakeFiles/O44.dir/build

CMakeFiles/O44.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/O44.dir/cmake_clean.cmake
.PHONY : CMakeFiles/O44.dir/clean

CMakeFiles/O44.dir/depend:
	cd /home/obeux/CLionProjects/leetcode/O44/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/obeux/CLionProjects/leetcode/O44 /home/obeux/CLionProjects/leetcode/O44 /home/obeux/CLionProjects/leetcode/O44/cmake-build-debug /home/obeux/CLionProjects/leetcode/O44/cmake-build-debug /home/obeux/CLionProjects/leetcode/O44/cmake-build-debug/CMakeFiles/O44.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/O44.dir/depend

