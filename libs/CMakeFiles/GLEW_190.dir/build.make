# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING

# Include any dependencies generated for this target.
include libs/CMakeFiles/GLEW_190.dir/depend.make

# Include the progress variables for this target.
include libs/CMakeFiles/GLEW_190.dir/progress.make

# Include the compile flags for this target's objects.
include libs/CMakeFiles/GLEW_190.dir/flags.make

libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o: libs/CMakeFiles/GLEW_190.dir/flags.make
libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o: libs/glew-1.9.0/src/glew.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o"
	cd /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o   -c /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs/glew-1.9.0/src/glew.c

libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.i"
	cd /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs/glew-1.9.0/src/glew.c > CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.i

libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.s"
	cd /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs/glew-1.9.0/src/glew.c -o CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.s

libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.requires:
.PHONY : libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.requires

libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.provides: libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.requires
	$(MAKE) -f libs/CMakeFiles/GLEW_190.dir/build.make libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.provides.build
.PHONY : libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.provides

libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.provides.build: libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o

# Object files for target GLEW_190
GLEW_190_OBJECTS = \
"CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o"

# External object files for target GLEW_190
GLEW_190_EXTERNAL_OBJECTS =

libs/libGLEW_190.a: libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o
libs/libGLEW_190.a: libs/CMakeFiles/GLEW_190.dir/build.make
libs/libGLEW_190.a: libs/CMakeFiles/GLEW_190.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libGLEW_190.a"
	cd /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs && $(CMAKE_COMMAND) -P CMakeFiles/GLEW_190.dir/cmake_clean_target.cmake
	cd /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GLEW_190.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/CMakeFiles/GLEW_190.dir/build: libs/libGLEW_190.a
.PHONY : libs/CMakeFiles/GLEW_190.dir/build

libs/CMakeFiles/GLEW_190.dir/requires: libs/CMakeFiles/GLEW_190.dir/glew-1.9.0/src/glew.c.o.requires
.PHONY : libs/CMakeFiles/GLEW_190.dir/requires

libs/CMakeFiles/GLEW_190.dir/clean:
	cd /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs && $(CMAKE_COMMAND) -P CMakeFiles/GLEW_190.dir/cmake_clean.cmake
.PHONY : libs/CMakeFiles/GLEW_190.dir/clean

libs/CMakeFiles/GLEW_190.dir/depend:
	cd /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs /home/oliver/Desktop/OLD_DESKTOP_2/OLD_DESKTOP/PROJECT/THAT_THING/libs/CMakeFiles/GLEW_190.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/CMakeFiles/GLEW_190.dir/depend
