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
CMAKE_COMMAND = /snap/clion/88/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/88/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ming/git/c-learning/fast_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ming/git/c-learning/fast_test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Fast_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fast_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fast_test.dir/flags.make

CMakeFiles/Fast_test.dir/main.cpp.o: CMakeFiles/Fast_test.dir/flags.make
CMakeFiles/Fast_test.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ming/git/c-learning/fast_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Fast_test.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Fast_test.dir/main.cpp.o -c /home/ming/git/c-learning/fast_test/main.cpp

CMakeFiles/Fast_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fast_test.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ming/git/c-learning/fast_test/main.cpp > CMakeFiles/Fast_test.dir/main.cpp.i

CMakeFiles/Fast_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fast_test.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ming/git/c-learning/fast_test/main.cpp -o CMakeFiles/Fast_test.dir/main.cpp.s

# Object files for target Fast_test
Fast_test_OBJECTS = \
"CMakeFiles/Fast_test.dir/main.cpp.o"

# External object files for target Fast_test
Fast_test_EXTERNAL_OBJECTS =

Fast_test: CMakeFiles/Fast_test.dir/main.cpp.o
Fast_test: CMakeFiles/Fast_test.dir/build.make
Fast_test: /usr/local/lib/libopencv_gapi.so.4.1.2
Fast_test: /usr/local/lib/libopencv_stitching.so.4.1.2
Fast_test: /usr/local/lib/libopencv_aruco.so.4.1.2
Fast_test: /usr/local/lib/libopencv_bgsegm.so.4.1.2
Fast_test: /usr/local/lib/libopencv_bioinspired.so.4.1.2
Fast_test: /usr/local/lib/libopencv_ccalib.so.4.1.2
Fast_test: /usr/local/lib/libopencv_dnn_objdetect.so.4.1.2
Fast_test: /usr/local/lib/libopencv_dnn_superres.so.4.1.2
Fast_test: /usr/local/lib/libopencv_dpm.so.4.1.2
Fast_test: /usr/local/lib/libopencv_face.so.4.1.2
Fast_test: /usr/local/lib/libopencv_freetype.so.4.1.2
Fast_test: /usr/local/lib/libopencv_fuzzy.so.4.1.2
Fast_test: /usr/local/lib/libopencv_hfs.so.4.1.2
Fast_test: /usr/local/lib/libopencv_img_hash.so.4.1.2
Fast_test: /usr/local/lib/libopencv_line_descriptor.so.4.1.2
Fast_test: /usr/local/lib/libopencv_quality.so.4.1.2
Fast_test: /usr/local/lib/libopencv_reg.so.4.1.2
Fast_test: /usr/local/lib/libopencv_rgbd.so.4.1.2
Fast_test: /usr/local/lib/libopencv_saliency.so.4.1.2
Fast_test: /usr/local/lib/libopencv_stereo.so.4.1.2
Fast_test: /usr/local/lib/libopencv_structured_light.so.4.1.2
Fast_test: /usr/local/lib/libopencv_superres.so.4.1.2
Fast_test: /usr/local/lib/libopencv_surface_matching.so.4.1.2
Fast_test: /usr/local/lib/libopencv_tracking.so.4.1.2
Fast_test: /usr/local/lib/libopencv_videostab.so.4.1.2
Fast_test: /usr/local/lib/libopencv_xfeatures2d.so.4.1.2
Fast_test: /usr/local/lib/libopencv_xobjdetect.so.4.1.2
Fast_test: /usr/local/lib/libopencv_xphoto.so.4.1.2
Fast_test: /usr/local/lib/libopencv_shape.so.4.1.2
Fast_test: /usr/local/lib/libopencv_highgui.so.4.1.2
Fast_test: /usr/local/lib/libopencv_datasets.so.4.1.2
Fast_test: /usr/local/lib/libopencv_plot.so.4.1.2
Fast_test: /usr/local/lib/libopencv_text.so.4.1.2
Fast_test: /usr/local/lib/libopencv_dnn.so.4.1.2
Fast_test: /usr/local/lib/libopencv_ml.so.4.1.2
Fast_test: /usr/local/lib/libopencv_phase_unwrapping.so.4.1.2
Fast_test: /usr/local/lib/libopencv_optflow.so.4.1.2
Fast_test: /usr/local/lib/libopencv_ximgproc.so.4.1.2
Fast_test: /usr/local/lib/libopencv_video.so.4.1.2
Fast_test: /usr/local/lib/libopencv_videoio.so.4.1.2
Fast_test: /usr/local/lib/libopencv_imgcodecs.so.4.1.2
Fast_test: /usr/local/lib/libopencv_objdetect.so.4.1.2
Fast_test: /usr/local/lib/libopencv_calib3d.so.4.1.2
Fast_test: /usr/local/lib/libopencv_features2d.so.4.1.2
Fast_test: /usr/local/lib/libopencv_flann.so.4.1.2
Fast_test: /usr/local/lib/libopencv_photo.so.4.1.2
Fast_test: /usr/local/lib/libopencv_imgproc.so.4.1.2
Fast_test: /usr/local/lib/libopencv_core.so.4.1.2
Fast_test: CMakeFiles/Fast_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ming/git/c-learning/fast_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Fast_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fast_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fast_test.dir/build: Fast_test

.PHONY : CMakeFiles/Fast_test.dir/build

CMakeFiles/Fast_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Fast_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Fast_test.dir/clean

CMakeFiles/Fast_test.dir/depend:
	cd /home/ming/git/c-learning/fast_test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ming/git/c-learning/fast_test /home/ming/git/c-learning/fast_test /home/ming/git/c-learning/fast_test/cmake-build-debug /home/ming/git/c-learning/fast_test/cmake-build-debug /home/ming/git/c-learning/fast_test/cmake-build-debug/CMakeFiles/Fast_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Fast_test.dir/depend

