# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ray/code/iio-practice/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ray/code/iio-practice/cpp/test

# Include any dependencies generated for this target.
include CMakeFiles/GnssLibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GnssLibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GnssLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GnssLibrary.dir/flags.make

CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o: CMakeFiles/GnssLibrary.dir/flags.make
CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o: ../GnssListener.cpp
CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o: CMakeFiles/GnssLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ray/code/iio-practice/cpp/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o -MF CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o.d -o CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o -c /home/ray/code/iio-practice/cpp/GnssListener.cpp

CMakeFiles/GnssLibrary.dir/GnssListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GnssLibrary.dir/GnssListener.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ray/code/iio-practice/cpp/GnssListener.cpp > CMakeFiles/GnssLibrary.dir/GnssListener.cpp.i

CMakeFiles/GnssLibrary.dir/GnssListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GnssLibrary.dir/GnssListener.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ray/code/iio-practice/cpp/GnssListener.cpp -o CMakeFiles/GnssLibrary.dir/GnssListener.cpp.s

CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o: CMakeFiles/GnssLibrary.dir/flags.make
CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o: ../NmeaParser.cpp
CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o: CMakeFiles/GnssLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ray/code/iio-practice/cpp/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o -MF CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o.d -o CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o -c /home/ray/code/iio-practice/cpp/NmeaParser.cpp

CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ray/code/iio-practice/cpp/NmeaParser.cpp > CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.i

CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ray/code/iio-practice/cpp/NmeaParser.cpp -o CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.s

CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o: CMakeFiles/GnssLibrary.dir/flags.make
CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o: ../Tokenizer.cpp
CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o: CMakeFiles/GnssLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ray/code/iio-practice/cpp/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o -MF CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o.d -o CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o -c /home/ray/code/iio-practice/cpp/Tokenizer.cpp

CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ray/code/iio-practice/cpp/Tokenizer.cpp > CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.i

CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ray/code/iio-practice/cpp/Tokenizer.cpp -o CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.s

# Object files for target GnssLibrary
GnssLibrary_OBJECTS = \
"CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o" \
"CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o" \
"CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o"

# External object files for target GnssLibrary
GnssLibrary_EXTERNAL_OBJECTS =

libGnssLibrary.a: CMakeFiles/GnssLibrary.dir/GnssListener.cpp.o
libGnssLibrary.a: CMakeFiles/GnssLibrary.dir/NmeaParser.cpp.o
libGnssLibrary.a: CMakeFiles/GnssLibrary.dir/Tokenizer.cpp.o
libGnssLibrary.a: CMakeFiles/GnssLibrary.dir/build.make
libGnssLibrary.a: CMakeFiles/GnssLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ray/code/iio-practice/cpp/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libGnssLibrary.a"
	$(CMAKE_COMMAND) -P CMakeFiles/GnssLibrary.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GnssLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GnssLibrary.dir/build: libGnssLibrary.a
.PHONY : CMakeFiles/GnssLibrary.dir/build

CMakeFiles/GnssLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GnssLibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GnssLibrary.dir/clean

CMakeFiles/GnssLibrary.dir/depend:
	cd /home/ray/code/iio-practice/cpp/test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ray/code/iio-practice/cpp /home/ray/code/iio-practice/cpp /home/ray/code/iio-practice/cpp/test /home/ray/code/iio-practice/cpp/test /home/ray/code/iio-practice/cpp/test/CMakeFiles/GnssLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GnssLibrary.dir/depend

