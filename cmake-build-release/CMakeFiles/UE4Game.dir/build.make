# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\UNREAL PROJECT\CardGame 4.25 - 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-release"

# Utility rule file for UE4Game.

# Include the progress variables for this target.
include CMakeFiles\UE4Game.dir\progress.make

CMakeFiles\UE4Game:
	call E:/UE_4.25/Engine/Build/BatchFiles/Build.bat UE4Game Win64 Development -game -progress -buildscw

UE4Game: CMakeFiles\UE4Game
UE4Game: CMakeFiles\UE4Game.dir\build.make

.PHONY : UE4Game

# Rule to build all files generated by this target.
CMakeFiles\UE4Game.dir\build: UE4Game

.PHONY : CMakeFiles\UE4Game.dir\build

CMakeFiles\UE4Game.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UE4Game.dir\cmake_clean.cmake
.PHONY : CMakeFiles\UE4Game.dir\clean

CMakeFiles\UE4Game.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "E:\UNREAL PROJECT\CardGame 4.25 - 2" "E:\UNREAL PROJECT\CardGame 4.25 - 2" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-release" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-release" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-release\CMakeFiles\UE4Game.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\UE4Game.dir\depend

