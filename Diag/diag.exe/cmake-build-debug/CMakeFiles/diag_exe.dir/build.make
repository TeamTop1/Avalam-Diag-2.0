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
CMAKE_COMMAND = /snap/clion/16/bin/cmake/bin/cmake

# The command to remove a file.
RM = /snap/clion/16/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/diag_exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/diag_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/diag_exe.dir/flags.make

CMakeFiles/diag_exe.dir/example/diag.c.o: CMakeFiles/diag_exe.dir/flags.make
CMakeFiles/diag_exe.dir/example/diag.c.o: ../example/diag.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/diag_exe.dir/example/diag.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/diag_exe.dir/example/diag.c.o   -c "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/example/diag.c"

CMakeFiles/diag_exe.dir/example/diag.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/diag_exe.dir/example/diag.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/example/diag.c" > CMakeFiles/diag_exe.dir/example/diag.c.i

CMakeFiles/diag_exe.dir/example/diag.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/diag_exe.dir/example/diag.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/example/diag.c" -o CMakeFiles/diag_exe.dir/example/diag.c.s

CMakeFiles/diag_exe.dir/example/diag.c.o.requires:

.PHONY : CMakeFiles/diag_exe.dir/example/diag.c.o.requires

CMakeFiles/diag_exe.dir/example/diag.c.o.provides: CMakeFiles/diag_exe.dir/example/diag.c.o.requires
	$(MAKE) -f CMakeFiles/diag_exe.dir/build.make CMakeFiles/diag_exe.dir/example/diag.c.o.provides.build
.PHONY : CMakeFiles/diag_exe.dir/example/diag.c.o.provides

CMakeFiles/diag_exe.dir/example/diag.c.o.provides.build: CMakeFiles/diag_exe.dir/example/diag.c.o


CMakeFiles/diag_exe.dir/example/main.c.o: CMakeFiles/diag_exe.dir/flags.make
CMakeFiles/diag_exe.dir/example/main.c.o: ../example/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/diag_exe.dir/example/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/diag_exe.dir/example/main.c.o   -c "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/example/main.c"

CMakeFiles/diag_exe.dir/example/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/diag_exe.dir/example/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/example/main.c" > CMakeFiles/diag_exe.dir/example/main.c.i

CMakeFiles/diag_exe.dir/example/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/diag_exe.dir/example/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/example/main.c" -o CMakeFiles/diag_exe.dir/example/main.c.s

CMakeFiles/diag_exe.dir/example/main.c.o.requires:

.PHONY : CMakeFiles/diag_exe.dir/example/main.c.o.requires

CMakeFiles/diag_exe.dir/example/main.c.o.provides: CMakeFiles/diag_exe.dir/example/main.c.o.requires
	$(MAKE) -f CMakeFiles/diag_exe.dir/build.make CMakeFiles/diag_exe.dir/example/main.c.o.provides.build
.PHONY : CMakeFiles/diag_exe.dir/example/main.c.o.provides

CMakeFiles/diag_exe.dir/example/main.c.o.provides.build: CMakeFiles/diag_exe.dir/example/main.c.o


CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o: CMakeFiles/diag_exe.dir/flags.make
CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o: ../lib-src/libavalam.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o   -c "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/lib-src/libavalam.c"

CMakeFiles/diag_exe.dir/lib-src/libavalam.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/diag_exe.dir/lib-src/libavalam.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/lib-src/libavalam.c" > CMakeFiles/diag_exe.dir/lib-src/libavalam.c.i

CMakeFiles/diag_exe.dir/lib-src/libavalam.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/diag_exe.dir/lib-src/libavalam.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/lib-src/libavalam.c" -o CMakeFiles/diag_exe.dir/lib-src/libavalam.c.s

CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.requires:

.PHONY : CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.requires

CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.provides: CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.requires
	$(MAKE) -f CMakeFiles/diag_exe.dir/build.make CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.provides.build
.PHONY : CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.provides

CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.provides.build: CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o


# Object files for target diag_exe
diag_exe_OBJECTS = \
"CMakeFiles/diag_exe.dir/example/diag.c.o" \
"CMakeFiles/diag_exe.dir/example/main.c.o" \
"CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o"

# External object files for target diag_exe
diag_exe_EXTERNAL_OBJECTS =

diag_exe: CMakeFiles/diag_exe.dir/example/diag.c.o
diag_exe: CMakeFiles/diag_exe.dir/example/main.c.o
diag_exe: CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o
diag_exe: CMakeFiles/diag_exe.dir/build.make
diag_exe: CMakeFiles/diag_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable diag_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/diag_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/diag_exe.dir/build: diag_exe

.PHONY : CMakeFiles/diag_exe.dir/build

CMakeFiles/diag_exe.dir/requires: CMakeFiles/diag_exe.dir/example/diag.c.o.requires
CMakeFiles/diag_exe.dir/requires: CMakeFiles/diag_exe.dir/example/main.c.o.requires
CMakeFiles/diag_exe.dir/requires: CMakeFiles/diag_exe.dir/lib-src/libavalam.c.o.requires

.PHONY : CMakeFiles/diag_exe.dir/requires

CMakeFiles/diag_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/diag_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/diag_exe.dir/clean

CMakeFiles/diag_exe.dir/depend:
	cd "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe" "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe" "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug" "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug" "/home/pilou/Documents/LE1/Challenge mj/Diag/diag.exe/cmake-build-debug/CMakeFiles/diag_exe.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/diag_exe.dir/depend

