cmake_minimum_required(VERSION 2.6)

project(demo)

message(STATUS "PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")
message(STATUS "PROJECT_BINARY_DIR=${PROJECT_BINARY_DIR}")

# project后,这两个变量自动生效
message(STATUS "demo_SOURCE_DIR=${demo_SOURCE_DIR}")
message(STATUS "demo_BINARY_DIR=${demo_BINARY_DIR}")

# 查找在某个路径下的所有源文件
aux_source_directory(. SRCS)
message(STATUS "SRCS=${SRCS}")

add_executable(demo ${SRCS})
