# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Aaron's Folder/173Projects/Project2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage"

# Include any dependencies generated for this target.
include CMakeFiles/Project2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project2.dir/flags.make

CMakeFiles/Project2.dir/main.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Project2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/main.c.o -c "/mnt/c/Aaron's Folder/173Projects/Project2/main.c"

CMakeFiles/Project2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Aaron's Folder/173Projects/Project2/main.c" > CMakeFiles/Project2.dir/main.c.i

CMakeFiles/Project2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Aaron's Folder/173Projects/Project2/main.c" -o CMakeFiles/Project2.dir/main.c.s

CMakeFiles/Project2.dir/BitSet.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/BitSet.c.o: ../BitSet.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Project2.dir/BitSet.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/BitSet.c.o -c "/mnt/c/Aaron's Folder/173Projects/Project2/BitSet.c"

CMakeFiles/Project2.dir/BitSet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/BitSet.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Aaron's Folder/173Projects/Project2/BitSet.c" > CMakeFiles/Project2.dir/BitSet.c.i

CMakeFiles/Project2.dir/BitSet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/BitSet.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Aaron's Folder/173Projects/Project2/BitSet.c" -o CMakeFiles/Project2.dir/BitSet.c.s

CMakeFiles/Project2.dir/dfa.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/dfa.c.o: ../dfa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Project2.dir/dfa.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/dfa.c.o -c "/mnt/c/Aaron's Folder/173Projects/Project2/dfa.c"

CMakeFiles/Project2.dir/dfa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/dfa.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Aaron's Folder/173Projects/Project2/dfa.c" > CMakeFiles/Project2.dir/dfa.c.i

CMakeFiles/Project2.dir/dfa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/dfa.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Aaron's Folder/173Projects/Project2/dfa.c" -o CMakeFiles/Project2.dir/dfa.c.s

CMakeFiles/Project2.dir/IntHashSet.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/IntHashSet.c.o: ../IntHashSet.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Project2.dir/IntHashSet.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/IntHashSet.c.o -c "/mnt/c/Aaron's Folder/173Projects/Project2/IntHashSet.c"

CMakeFiles/Project2.dir/IntHashSet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/IntHashSet.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Aaron's Folder/173Projects/Project2/IntHashSet.c" > CMakeFiles/Project2.dir/IntHashSet.c.i

CMakeFiles/Project2.dir/IntHashSet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/IntHashSet.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Aaron's Folder/173Projects/Project2/IntHashSet.c" -o CMakeFiles/Project2.dir/IntHashSet.c.s

CMakeFiles/Project2.dir/LinkedList.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/LinkedList.c.o: ../LinkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Project2.dir/LinkedList.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/LinkedList.c.o -c "/mnt/c/Aaron's Folder/173Projects/Project2/LinkedList.c"

CMakeFiles/Project2.dir/LinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/LinkedList.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Aaron's Folder/173Projects/Project2/LinkedList.c" > CMakeFiles/Project2.dir/LinkedList.c.i

CMakeFiles/Project2.dir/LinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/LinkedList.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Aaron's Folder/173Projects/Project2/LinkedList.c" -o CMakeFiles/Project2.dir/LinkedList.c.s

CMakeFiles/Project2.dir/strdup.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/strdup.c.o: ../strdup.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Project2.dir/strdup.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/strdup.c.o -c "/mnt/c/Aaron's Folder/173Projects/Project2/strdup.c"

CMakeFiles/Project2.dir/strdup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/strdup.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Aaron's Folder/173Projects/Project2/strdup.c" > CMakeFiles/Project2.dir/strdup.c.i

CMakeFiles/Project2.dir/strdup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/strdup.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Aaron's Folder/173Projects/Project2/strdup.c" -o CMakeFiles/Project2.dir/strdup.c.s

CMakeFiles/Project2.dir/nfa.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/nfa.c.o: ../nfa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/Project2.dir/nfa.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/nfa.c.o -c "/mnt/c/Aaron's Folder/173Projects/Project2/nfa.c"

CMakeFiles/Project2.dir/nfa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/nfa.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Aaron's Folder/173Projects/Project2/nfa.c" > CMakeFiles/Project2.dir/nfa.c.i

CMakeFiles/Project2.dir/nfa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/nfa.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Aaron's Folder/173Projects/Project2/nfa.c" -o CMakeFiles/Project2.dir/nfa.c.s

# Object files for target Project2
Project2_OBJECTS = \
"CMakeFiles/Project2.dir/main.c.o" \
"CMakeFiles/Project2.dir/BitSet.c.o" \
"CMakeFiles/Project2.dir/dfa.c.o" \
"CMakeFiles/Project2.dir/IntHashSet.c.o" \
"CMakeFiles/Project2.dir/LinkedList.c.o" \
"CMakeFiles/Project2.dir/strdup.c.o" \
"CMakeFiles/Project2.dir/nfa.c.o"

# External object files for target Project2
Project2_EXTERNAL_OBJECTS =

Project2: CMakeFiles/Project2.dir/main.c.o
Project2: CMakeFiles/Project2.dir/BitSet.c.o
Project2: CMakeFiles/Project2.dir/dfa.c.o
Project2: CMakeFiles/Project2.dir/IntHashSet.c.o
Project2: CMakeFiles/Project2.dir/LinkedList.c.o
Project2: CMakeFiles/Project2.dir/strdup.c.o
Project2: CMakeFiles/Project2.dir/nfa.c.o
Project2: CMakeFiles/Project2.dir/build.make
Project2: CMakeFiles/Project2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable Project2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project2.dir/build: Project2

.PHONY : CMakeFiles/Project2.dir/build

CMakeFiles/Project2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project2.dir/clean

CMakeFiles/Project2.dir/depend:
	cd "/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Aaron's Folder/173Projects/Project2" "/mnt/c/Aaron's Folder/173Projects/Project2" "/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage" "/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage" "/mnt/c/Aaron's Folder/173Projects/Project2/cmake-build-debug-coverage/CMakeFiles/Project2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Project2.dir/depend

