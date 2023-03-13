cmake_minimum_required(VERSION 3.8)
 
add_executable(Utils src/Sets.cpp include/Sets.h include/Trees.h)

target_include_directories(Utils PUBLIC include/)