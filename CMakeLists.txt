cmake_minimum_required(VERSION 3.5)

project(testProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_executable(testProject main.cpp functions.cpp tst/main.cpp)
#set(testProject functions.h)
#set(testProject functions.cpp)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)
