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

# Utility rule file for CardGame-Win64-Shipping.

# Include the progress variables for this target.
include CMakeFiles\CardGame-Win64-Shipping.dir\progress.make

CMakeFiles\CardGame-Win64-Shipping:
	call E:/UE_4.25/Engine/Build/BatchFiles/Build.bat CardGame Win64 Shipping "-project=E:/UNREAL PROJECT/CardGame 4.25 - 2/CardGame.uproject" -game -progress -buildscw

CardGame-Win64-Shipping: CMakeFiles\CardGame-Win64-Shipping
CardGame-Win64-Shipping: CMakeFiles\CardGame-Win64-Shipping.dir\build.make

.PHONY : CardGame-Win64-Shipping

# Rule to build all files generated by this target.
CMakeFiles\CardGame-Win64-Shipping.dir\build: CardGame-Win64-Shipping

.PHONY : CMakeFiles\CardGame-Win64-Shipping.dir\build

CMakeFiles\CardGame-Win64-Shipping.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CardGame-Win64-Shipping.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CardGame-Win64-Shipping.dir\clean

CMakeFiles\CardGame-Win64-Shipping.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "E:\UNREAL PROJECT\CardGame 4.25 - 2" "E:\UNREAL PROJECT\CardGame 4.25 - 2" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-release" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-release" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-release\CMakeFiles\CardGame-Win64-Shipping.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\CardGame-Win64-Shipping.dir\depend

