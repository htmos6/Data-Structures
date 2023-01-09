# CMakeList.txt : CMake project for DoubleLinkedList, include source and define
# project specific logic here.
#

# Add source to this project's executable.cmake_minimum_required (VERSION 3.8)
cmake_minimum_required (VERSION 3.8)
add_executable (Util src/main.cpp include/main.h include/random.h)
target_include_directories(Util PUBLIC include/)


# TODO: Add tests and install targets if needed.
