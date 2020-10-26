cmake_minimum_required(VERSION 2.6)

project(demo)

message(STATUS "PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")
message(STATUS "PROJECT_BINARY_DIR=${PROJECT_BINARY_DIR}")

# project后,这两个变量自动生效
message(STATUS "demo_SOURCE_DIR=${demo_SOURCE_DIR}")
message(STATUS "demo_BINARY_DIR=${demo_BINARY_DIR}")

# 查找在某个路径下的所有源文件
aux_source_directory(. SRCS)
aux_source_directory(src SRCS)
message(STATUS "SRCS=${SRCS}")

#指定头文件搜索路径 -I
include_directories(include)

# 添加子目录 
add_subdirectory(lib)

# 指定可执行文件名称
add_executable(demo ${SRCS})

# 引用的外部库的搜索路径 -L
link_directories(${PROJECT_BINARY_DIR}/lib)
message(STATUS "link_directories=${PROJECT_BINARY_DIR}/lib")

# 指定要连接的库(这里貌似不能写xxx.so/a)
target_link_libraries(demo foo)

