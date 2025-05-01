cmake_minimum_required(VERSION 3.10)
project(cses-problemset)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(SRC_FILES "src/main.cpp")
# (OR) 
file(GLOB SRC_FILES "src/*.cpp")

foreach(PROBLEM ${SRC_FILES})
  get_filename_component(EXEC_NAME ${PROBLEM} NAME_WE)
  add_executable(${EXEC_NAME} ${PROBLEM})
endforeach()