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
CMAKE_SOURCE_DIR = C:\Users\word2\Documents\GitHub\POO\Semana4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\word2\Documents\GitHub\POO\Semana4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Semana4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Semana4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Semana4.dir/flags.make

CMakeFiles/Semana4.dir/main.cpp.obj: CMakeFiles/Semana4.dir/flags.make
CMakeFiles/Semana4.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\word2\Documents\GitHub\POO\Semana4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Semana4.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Semana4.dir\main.cpp.obj -c C:\Users\word2\Documents\GitHub\POO\Semana4\main.cpp

CMakeFiles/Semana4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semana4.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\word2\Documents\GitHub\POO\Semana4\main.cpp > CMakeFiles\Semana4.dir\main.cpp.i

CMakeFiles/Semana4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semana4.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\word2\Documents\GitHub\POO\Semana4\main.cpp -o CMakeFiles\Semana4.dir\main.cpp.s

CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.obj: CMakeFiles/Semana4.dir/flags.make
CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.obj: ../Matrix/Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\word2\Documents\GitHub\POO\Semana4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Semana4.dir\Matrix\Matrix.cpp.obj -c C:\Users\word2\Documents\GitHub\POO\Semana4\Matrix\Matrix.cpp

CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\word2\Documents\GitHub\POO\Semana4\Matrix\Matrix.cpp > CMakeFiles\Semana4.dir\Matrix\Matrix.cpp.i

CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\word2\Documents\GitHub\POO\Semana4\Matrix\Matrix.cpp -o CMakeFiles\Semana4.dir\Matrix\Matrix.cpp.s

# Object files for target Semana4
Semana4_OBJECTS = \
"CMakeFiles/Semana4.dir/main.cpp.obj" \
"CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.obj"

# External object files for target Semana4
Semana4_EXTERNAL_OBJECTS =

Semana4.exe: CMakeFiles/Semana4.dir/main.cpp.obj
Semana4.exe: CMakeFiles/Semana4.dir/Matrix/Matrix.cpp.obj
Semana4.exe: CMakeFiles/Semana4.dir/build.make
Semana4.exe: CMakeFiles/Semana4.dir/linklibs.rsp
Semana4.exe: CMakeFiles/Semana4.dir/objects1.rsp
Semana4.exe: CMakeFiles/Semana4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\word2\Documents\GitHub\POO\Semana4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Semana4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Semana4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Semana4.dir/build: Semana4.exe

.PHONY : CMakeFiles/Semana4.dir/build

CMakeFiles/Semana4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Semana4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Semana4.dir/clean

CMakeFiles/Semana4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\word2\Documents\GitHub\POO\Semana4 C:\Users\word2\Documents\GitHub\POO\Semana4 C:\Users\word2\Documents\GitHub\POO\Semana4\cmake-build-debug C:\Users\word2\Documents\GitHub\POO\Semana4\cmake-build-debug C:\Users\word2\Documents\GitHub\POO\Semana4\cmake-build-debug\CMakeFiles\Semana4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Semana4.dir/depend

