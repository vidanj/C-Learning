cmake_minimum_required(VERSION 3.28)
project(C-Learning CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# PPP support — header-only interface library
add_library(PPP INTERFACE)
target_include_directories(PPP INTERFACE ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(Drills)
