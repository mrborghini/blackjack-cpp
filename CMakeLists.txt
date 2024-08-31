cmake_minimum_required(VERSION 3.20)

# Project name and version
project(blackjack-cpp VERSION 1.0)

# Enable testing
enable_testing()

# Set the C++ Standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the source and test directories
add_subdirectory(src)
