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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\elen_\CLionProjects\MargaritaTheBest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\elen_\CLionProjects\MargaritaTheBest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MargaritaTheBest.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MargaritaTheBest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MargaritaTheBest.dir/flags.make

CMakeFiles/MargaritaTheBest.dir/main.c.obj: CMakeFiles/MargaritaTheBest.dir/flags.make
CMakeFiles/MargaritaTheBest.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\elen_\CLionProjects\MargaritaTheBest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MargaritaTheBest.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MargaritaTheBest.dir\main.c.obj -c C:\Users\elen_\CLionProjects\MargaritaTheBest\main.c

CMakeFiles/MargaritaTheBest.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MargaritaTheBest.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\elen_\CLionProjects\MargaritaTheBest\main.c > CMakeFiles\MargaritaTheBest.dir\main.c.i

CMakeFiles/MargaritaTheBest.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MargaritaTheBest.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\elen_\CLionProjects\MargaritaTheBest\main.c -o CMakeFiles\MargaritaTheBest.dir\main.c.s

# Object files for target MargaritaTheBest
MargaritaTheBest_OBJECTS = \
"CMakeFiles/MargaritaTheBest.dir/main.c.obj"

# External object files for target MargaritaTheBest
MargaritaTheBest_EXTERNAL_OBJECTS =

MargaritaTheBest.exe: CMakeFiles/MargaritaTheBest.dir/main.c.obj
MargaritaTheBest.exe: CMakeFiles/MargaritaTheBest.dir/build.make
MargaritaTheBest.exe: CMakeFiles/MargaritaTheBest.dir/linklibs.rsp
MargaritaTheBest.exe: CMakeFiles/MargaritaTheBest.dir/objects1.rsp
MargaritaTheBest.exe: CMakeFiles/MargaritaTheBest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\elen_\CLionProjects\MargaritaTheBest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MargaritaTheBest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MargaritaTheBest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MargaritaTheBest.dir/build: MargaritaTheBest.exe
.PHONY : CMakeFiles/MargaritaTheBest.dir/build

CMakeFiles/MargaritaTheBest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MargaritaTheBest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MargaritaTheBest.dir/clean

CMakeFiles/MargaritaTheBest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\elen_\CLionProjects\MargaritaTheBest C:\Users\elen_\CLionProjects\MargaritaTheBest C:\Users\elen_\CLionProjects\MargaritaTheBest\cmake-build-debug C:\Users\elen_\CLionProjects\MargaritaTheBest\cmake-build-debug C:\Users\elen_\CLionProjects\MargaritaTheBest\cmake-build-debug\CMakeFiles\MargaritaTheBest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MargaritaTheBest.dir/depend

