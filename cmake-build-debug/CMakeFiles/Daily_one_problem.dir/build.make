# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "/Users/lx/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/lx/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lx/CLionProjects/Daily-one-problem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lx/CLionProjects/Daily-one-problem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Daily_one_problem.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Daily_one_problem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Daily_one_problem.dir/flags.make

CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.o: CMakeFiles/Daily_one_problem.dir/flags.make
CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.o: ../PAT_B/B1013.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lx/CLionProjects/Daily-one-problem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.o -c /Users/lx/CLionProjects/Daily-one-problem/PAT_B/B1013.cpp

CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lx/CLionProjects/Daily-one-problem/PAT_B/B1013.cpp > CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.i

CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lx/CLionProjects/Daily-one-problem/PAT_B/B1013.cpp -o CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.s

# Object files for target Daily_one_problem
Daily_one_problem_OBJECTS = \
"CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.o"

# External object files for target Daily_one_problem
Daily_one_problem_EXTERNAL_OBJECTS =

Daily_one_problem: CMakeFiles/Daily_one_problem.dir/PAT_B/B1013.cpp.o
Daily_one_problem: CMakeFiles/Daily_one_problem.dir/build.make
Daily_one_problem: CMakeFiles/Daily_one_problem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lx/CLionProjects/Daily-one-problem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Daily_one_problem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Daily_one_problem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Daily_one_problem.dir/build: Daily_one_problem
.PHONY : CMakeFiles/Daily_one_problem.dir/build

CMakeFiles/Daily_one_problem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Daily_one_problem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Daily_one_problem.dir/clean

CMakeFiles/Daily_one_problem.dir/depend:
	cd /Users/lx/CLionProjects/Daily-one-problem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lx/CLionProjects/Daily-one-problem /Users/lx/CLionProjects/Daily-one-problem /Users/lx/CLionProjects/Daily-one-problem/cmake-build-debug /Users/lx/CLionProjects/Daily-one-problem/cmake-build-debug /Users/lx/CLionProjects/Daily-one-problem/cmake-build-debug/CMakeFiles/Daily_one_problem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Daily_one_problem.dir/depend

