# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\word2\Documents\GitHub\POO\Semana2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\word2\Documents\GitHub\POO\Semana2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Semana2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Semana2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Semana2.dir/flags.make

CMakeFiles/Semana2.dir/main.cpp.obj: CMakeFiles/Semana2.dir/flags.make
CMakeFiles/Semana2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\word2\Documents\GitHub\POO\Semana2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Semana2.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Semana2.dir\main.cpp.obj -c C:\Users\word2\Documents\GitHub\POO\Semana2\main.cpp

CMakeFiles/Semana2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semana2.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\word2\Documents\GitHub\POO\Semana2\main.cpp > CMakeFiles\Semana2.dir\main.cpp.i

CMakeFiles/Semana2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semana2.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\word2\Documents\GitHub\POO\Semana2\main.cpp -o CMakeFiles\Semana2.dir\main.cpp.s

CMakeFiles/Semana2.dir/Matriz/matrix.cpp.obj: CMakeFiles/Semana2.dir/flags.make
CMakeFiles/Semana2.dir/Matriz/matrix.cpp.obj: ../Matriz/matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\word2\Documents\GitHub\POO\Semana2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Semana2.dir/Matriz/matrix.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Semana2.dir\Matriz\matrix.cpp.obj -c C:\Users\word2\Documents\GitHub\POO\Semana2\Matriz\matrix.cpp

CMakeFiles/Semana2.dir/Matriz/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semana2.dir/Matriz/matrix.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\word2\Documents\GitHub\POO\Semana2\Matriz\matrix.cpp > CMakeFiles\Semana2.dir\Matriz\matrix.cpp.i

CMakeFiles/Semana2.dir/Matriz/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semana2.dir/Matriz/matrix.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\word2\Documents\GitHub\POO\Semana2\Matriz\matrix.cpp -o CMakeFiles\Semana2.dir\Matriz\matrix.cpp.s

# Object files for target Semana2
Semana2_OBJECTS = \
"CMakeFiles/Semana2.dir/main.cpp.obj" \
"CMakeFiles/Semana2.dir/Matriz/matrix.cpp.obj"

# External object files for target Semana2
Semana2_EXTERNAL_OBJECTS =

Semana2.exe: CMakeFiles/Semana2.dir/main.cpp.obj
Semana2.exe: CMakeFiles/Semana2.dir/Matriz/matrix.cpp.obj
Semana2.exe: CMakeFiles/Semana2.dir/build.make
Semana2.exe: CMakeFiles/Semana2.dir/linklibs.rsp
Semana2.exe: CMakeFiles/Semana2.dir/objects1.rsp
Semana2.exe: CMakeFiles/Semana2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\word2\Documents\GitHub\POO\Semana2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Semana2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Semana2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Semana2.dir/build: Semana2.exe

.PHONY : CMakeFiles/Semana2.dir/build

CMakeFiles/Semana2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Semana2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Semana2.dir/clean

CMakeFiles/Semana2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\word2\Documents\GitHub\POO\Semana2 C:\Users\word2\Documents\GitHub\POO\Semana2 C:\Users\word2\Documents\GitHub\POO\Semana2\cmake-build-debug C:\Users\word2\Documents\GitHub\POO\Semana2\cmake-build-debug C:\Users\word2\Documents\GitHub\POO\Semana2\cmake-build-debug\CMakeFiles\Semana2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Semana2.dir/depend

