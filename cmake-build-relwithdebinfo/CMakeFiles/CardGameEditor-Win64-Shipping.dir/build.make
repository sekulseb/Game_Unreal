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
CMAKE_BINARY_DIR = "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-relwithdebinfo"

# Utility rule file for CardGameEditor-Win64-Shipping.

# Include the progress variables for this target.
include CMakeFiles\CardGameEditor-Win64-Shipping.dir\progress.make

CMakeFiles\CardGameEditor-Win64-Shipping:
	call E:/UE_4.25/Engine/Build/BatchFiles/Build.bat CardGameEditor Win64 Shipping "-project=E:/UNREAL PROJECT/CardGame 4.25 - 2/CardGame.uproject" -game -progress -buildscw

CardGameEditor-Win64-Shipping: CMakeFiles\CardGameEditor-Win64-Shipping
CardGameEditor-Win64-Shipping: CMakeFiles\CardGameEditor-Win64-Shipping.dir\build.make

.PHONY : CardGameEditor-Win64-Shipping

# Rule to build all files generated by this target.
CMakeFiles\CardGameEditor-Win64-Shipping.dir\build: CardGameEditor-Win64-Shipping

.PHONY : CMakeFiles\CardGameEditor-Win64-Shipping.dir\build

CMakeFiles\CardGameEditor-Win64-Shipping.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CardGameEditor-Win64-Shipping.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CardGameEditor-Win64-Shipping.dir\clean

CMakeFiles\CardGameEditor-Win64-Shipping.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "E:\UNREAL PROJECT\CardGame 4.25 - 2" "E:\UNREAL PROJECT\CardGame 4.25 - 2" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-relwithdebinfo" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-relwithdebinfo" "E:\UNREAL PROJECT\CardGame 4.25 - 2\cmake-build-relwithdebinfo\CMakeFiles\CardGameEditor-Win64-Shipping.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\CardGameEditor-Win64-Shipping.dir\depend

