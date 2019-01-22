cmake_minimum_required (VERSION 2.6)
project (ComaSimulator)

# Version number
set (ComaSimulator_VERSION_MAJOR 0)
set (ComaSimulator_VERSION_MINOR 1)

# Add directory
set (BUILD_DIR bin)
file(MAKE_DIRECTORY ${BUILD_DIR})

# Add executable
add_executable(bin/ComaSimulator Coma.cxx)

