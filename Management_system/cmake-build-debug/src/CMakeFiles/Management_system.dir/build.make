# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/85/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/85/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ming/git/Management_system

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ming/git/Management_system/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/Management_system.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Management_system.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Management_system.dir/flags.make

src/CMakeFiles/Management_system.dir/main.cpp.o: src/CMakeFiles/Management_system.dir/flags.make
src/CMakeFiles/Management_system.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ming/git/Management_system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Management_system.dir/main.cpp.o"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Management_system.dir/main.cpp.o -c /home/ming/git/Management_system/src/main.cpp

src/CMakeFiles/Management_system.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Management_system.dir/main.cpp.i"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ming/git/Management_system/src/main.cpp > CMakeFiles/Management_system.dir/main.cpp.i

src/CMakeFiles/Management_system.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Management_system.dir/main.cpp.s"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ming/git/Management_system/src/main.cpp -o CMakeFiles/Management_system.dir/main.cpp.s

src/CMakeFiles/Management_system.dir/workerManager.cpp.o: src/CMakeFiles/Management_system.dir/flags.make
src/CMakeFiles/Management_system.dir/workerManager.cpp.o: ../src/workerManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ming/git/Management_system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/Management_system.dir/workerManager.cpp.o"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Management_system.dir/workerManager.cpp.o -c /home/ming/git/Management_system/src/workerManager.cpp

src/CMakeFiles/Management_system.dir/workerManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Management_system.dir/workerManager.cpp.i"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ming/git/Management_system/src/workerManager.cpp > CMakeFiles/Management_system.dir/workerManager.cpp.i

src/CMakeFiles/Management_system.dir/workerManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Management_system.dir/workerManager.cpp.s"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ming/git/Management_system/src/workerManager.cpp -o CMakeFiles/Management_system.dir/workerManager.cpp.s

src/CMakeFiles/Management_system.dir/employee.cpp.o: src/CMakeFiles/Management_system.dir/flags.make
src/CMakeFiles/Management_system.dir/employee.cpp.o: ../src/employee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ming/git/Management_system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/Management_system.dir/employee.cpp.o"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Management_system.dir/employee.cpp.o -c /home/ming/git/Management_system/src/employee.cpp

src/CMakeFiles/Management_system.dir/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Management_system.dir/employee.cpp.i"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ming/git/Management_system/src/employee.cpp > CMakeFiles/Management_system.dir/employee.cpp.i

src/CMakeFiles/Management_system.dir/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Management_system.dir/employee.cpp.s"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ming/git/Management_system/src/employee.cpp -o CMakeFiles/Management_system.dir/employee.cpp.s

src/CMakeFiles/Management_system.dir/manager.cpp.o: src/CMakeFiles/Management_system.dir/flags.make
src/CMakeFiles/Management_system.dir/manager.cpp.o: ../src/manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ming/git/Management_system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/Management_system.dir/manager.cpp.o"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Management_system.dir/manager.cpp.o -c /home/ming/git/Management_system/src/manager.cpp

src/CMakeFiles/Management_system.dir/manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Management_system.dir/manager.cpp.i"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ming/git/Management_system/src/manager.cpp > CMakeFiles/Management_system.dir/manager.cpp.i

src/CMakeFiles/Management_system.dir/manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Management_system.dir/manager.cpp.s"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ming/git/Management_system/src/manager.cpp -o CMakeFiles/Management_system.dir/manager.cpp.s

src/CMakeFiles/Management_system.dir/boss.cpp.o: src/CMakeFiles/Management_system.dir/flags.make
src/CMakeFiles/Management_system.dir/boss.cpp.o: ../src/boss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ming/git/Management_system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/Management_system.dir/boss.cpp.o"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Management_system.dir/boss.cpp.o -c /home/ming/git/Management_system/src/boss.cpp

src/CMakeFiles/Management_system.dir/boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Management_system.dir/boss.cpp.i"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ming/git/Management_system/src/boss.cpp > CMakeFiles/Management_system.dir/boss.cpp.i

src/CMakeFiles/Management_system.dir/boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Management_system.dir/boss.cpp.s"
	cd /home/ming/git/Management_system/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ming/git/Management_system/src/boss.cpp -o CMakeFiles/Management_system.dir/boss.cpp.s

# Object files for target Management_system
Management_system_OBJECTS = \
"CMakeFiles/Management_system.dir/main.cpp.o" \
"CMakeFiles/Management_system.dir/workerManager.cpp.o" \
"CMakeFiles/Management_system.dir/employee.cpp.o" \
"CMakeFiles/Management_system.dir/manager.cpp.o" \
"CMakeFiles/Management_system.dir/boss.cpp.o"

# External object files for target Management_system
Management_system_EXTERNAL_OBJECTS =

src/Management_system: src/CMakeFiles/Management_system.dir/main.cpp.o
src/Management_system: src/CMakeFiles/Management_system.dir/workerManager.cpp.o
src/Management_system: src/CMakeFiles/Management_system.dir/employee.cpp.o
src/Management_system: src/CMakeFiles/Management_system.dir/manager.cpp.o
src/Management_system: src/CMakeFiles/Management_system.dir/boss.cpp.o
src/Management_system: src/CMakeFiles/Management_system.dir/build.make
src/Management_system: src/CMakeFiles/Management_system.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ming/git/Management_system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Management_system"
	cd /home/ming/git/Management_system/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Management_system.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Management_system.dir/build: src/Management_system

.PHONY : src/CMakeFiles/Management_system.dir/build

src/CMakeFiles/Management_system.dir/clean:
	cd /home/ming/git/Management_system/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/Management_system.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Management_system.dir/clean

src/CMakeFiles/Management_system.dir/depend:
	cd /home/ming/git/Management_system/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ming/git/Management_system /home/ming/git/Management_system/src /home/ming/git/Management_system/cmake-build-debug /home/ming/git/Management_system/cmake-build-debug/src /home/ming/git/Management_system/cmake-build-debug/src/CMakeFiles/Management_system.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Management_system.dir/depend

