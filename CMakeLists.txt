cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

project(gflags-example CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

if (EXISTS "${PROJECT_SOURCE_DIR}/gflags/CMakeLists.txt")
  add_subdirectory(gflags)
else ()
  find_package(gflags REQUIRED)
endif ()

add_subdirectory(example)
