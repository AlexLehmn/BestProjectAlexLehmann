# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /home/alehmann/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.7172.20/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/alehmann/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.7172.20/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arcade.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arcade.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arcade.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arcade.dir/flags.make

CMakeFiles/arcade.dir/src/Main.cpp.o: CMakeFiles/arcade.dir/flags.make
CMakeFiles/arcade.dir/src/Main.cpp.o: ../src/Main.cpp
CMakeFiles/arcade.dir/src/Main.cpp.o: CMakeFiles/arcade.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arcade.dir/src/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arcade.dir/src/Main.cpp.o -MF CMakeFiles/arcade.dir/src/Main.cpp.o.d -o CMakeFiles/arcade.dir/src/Main.cpp.o -c /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/Main.cpp

CMakeFiles/arcade.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcade.dir/src/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/Main.cpp > CMakeFiles/arcade.dir/src/Main.cpp.i

CMakeFiles/arcade.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcade.dir/src/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/Main.cpp -o CMakeFiles/arcade.dir/src/Main.cpp.s

CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o: CMakeFiles/arcade.dir/flags.make
CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o: ../src/ArcadeBorne.cpp
CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o: CMakeFiles/arcade.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o -MF CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o.d -o CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o -c /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/ArcadeBorne.cpp

CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/ArcadeBorne.cpp > CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.i

CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/ArcadeBorne.cpp -o CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.s

CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o: CMakeFiles/arcade.dir/flags.make
CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o: ../src/ArcadeParse.cpp
CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o: CMakeFiles/arcade.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o -MF CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o.d -o CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o -c /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/ArcadeParse.cpp

CMakeFiles/arcade.dir/src/ArcadeParse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcade.dir/src/ArcadeParse.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/ArcadeParse.cpp > CMakeFiles/arcade.dir/src/ArcadeParse.cpp.i

CMakeFiles/arcade.dir/src/ArcadeParse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcade.dir/src/ArcadeParse.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/src/ArcadeParse.cpp -o CMakeFiles/arcade.dir/src/ArcadeParse.cpp.s

# Object files for target arcade
arcade_OBJECTS = \
"CMakeFiles/arcade.dir/src/Main.cpp.o" \
"CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o" \
"CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o"

# External object files for target arcade
arcade_EXTERNAL_OBJECTS =

arcade: CMakeFiles/arcade.dir/src/Main.cpp.o
arcade: CMakeFiles/arcade.dir/src/ArcadeBorne.cpp.o
arcade: CMakeFiles/arcade.dir/src/ArcadeParse.cpp.o
arcade: CMakeFiles/arcade.dir/build.make
arcade: CMakeFiles/arcade.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable arcade"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arcade.dir/link.txt --verbose=$(VERBOSE)
	cp arcade /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne

# Rule to build all files generated by this target.
CMakeFiles/arcade.dir/build: arcade
.PHONY : CMakeFiles/arcade.dir/build

CMakeFiles/arcade.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arcade.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arcade.dir/clean

CMakeFiles/arcade.dir/depend:
	cd /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug /home/alehmann/Epitech_2021_2022/Project/Semestre_4/B-OOP-400-LIL-4-1-arcade-thibault.campagne/cmake-build-debug/CMakeFiles/arcade.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arcade.dir/depend

