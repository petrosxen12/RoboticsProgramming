# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.10.1/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.10.1/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(CMAKE_COMMAND) -E cmake_progress_start "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client/CMakeFiles" "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client/applications/Task1/CMakeFiles/progress.marks"
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f CMakeFiles/Makefile2 applications/Task1/all
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f CMakeFiles/Makefile2 applications/Task1/clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f CMakeFiles/Makefile2 applications/Task1/preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f CMakeFiles/Makefile2 applications/Task1/preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

# Convenience name for target.
applications/Task1/CMakeFiles/Letters.dir/rule:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f CMakeFiles/Makefile2 applications/Task1/CMakeFiles/Letters.dir/rule
.PHONY : applications/Task1/CMakeFiles/Letters.dir/rule

# Convenience name for target.
Letters: applications/Task1/CMakeFiles/Letters.dir/rule

.PHONY : Letters

# fast build rule for target.
Letters/fast:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Letters.dir/build.make applications/Task1/CMakeFiles/Letters.dir/build
.PHONY : Letters/fast

# Convenience name for target.
applications/Task1/CMakeFiles/Testing.dir/rule:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f CMakeFiles/Makefile2 applications/Task1/CMakeFiles/Testing.dir/rule
.PHONY : applications/Task1/CMakeFiles/Testing.dir/rule

# Convenience name for target.
Testing: applications/Task1/CMakeFiles/Testing.dir/rule

.PHONY : Testing

# fast build rule for target.
Testing/fast:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Testing.dir/build.make applications/Task1/CMakeFiles/Testing.dir/build
.PHONY : Testing/fast

letters.o: letters.c.o

.PHONY : letters.o

# target to build an object file
letters.c.o:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Letters.dir/build.make applications/Task1/CMakeFiles/Letters.dir/letters.c.o
.PHONY : letters.c.o

letters.i: letters.c.i

.PHONY : letters.i

# target to preprocess a source file
letters.c.i:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Letters.dir/build.make applications/Task1/CMakeFiles/Letters.dir/letters.c.i
.PHONY : letters.c.i

letters.s: letters.c.s

.PHONY : letters.s

# target to generate assembly for a file
letters.c.s:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Letters.dir/build.make applications/Task1/CMakeFiles/Letters.dir/letters.c.s
.PHONY : letters.c.s

testing.o: testing.c.o

.PHONY : testing.o

# target to build an object file
testing.c.o:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Testing.dir/build.make applications/Task1/CMakeFiles/Testing.dir/testing.c.o
.PHONY : testing.c.o

testing.i: testing.c.i

.PHONY : testing.i

# target to preprocess a source file
testing.c.i:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Testing.dir/build.make applications/Task1/CMakeFiles/Testing.dir/testing.c.i
.PHONY : testing.c.i

testing.s: testing.c.s

.PHONY : testing.s

# target to generate assembly for a file
testing.c.s:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(MAKE) -f applications/Task1/CMakeFiles/Testing.dir/build.make applications/Task1/CMakeFiles/Testing.dir/testing.c.s
.PHONY : testing.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... Letters"
	@echo "... Testing"
	@echo "... letters.o"
	@echo "... letters.i"
	@echo "... letters.s"
	@echo "... testing.o"
	@echo "... testing.i"
	@echo "... testing.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	cd "/Users/petrosxen/Documents/UCL lectures/COMP105P/Simulator_Release_180107/Client" && $(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

