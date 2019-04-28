cmake_minimum_required (VERSION 3.7.2)

### Project name
set(PROJECT_NAME "sapwatcher")
set(INCL_DIR "include")
set(SRC_DIR "src")

### Special flags
set(GEN_FLAGS "-Wall -std=c++17 -pthread")
set(CMAKE_CXX_FLAGS ${GEN_FLAGS})

list(APPEND SRC_FILES ${SRC_DIR}/main.cpp ${SRC_DIR}/general_functions.cpp ${SRC_DIR}/watcher_core.cpp)

### Create an executable file
project(${PROJECT_NAME})
include_directories(${INCL_DIR})
add_executable(${PROJECT_NAME} ${SRC_FILES})
