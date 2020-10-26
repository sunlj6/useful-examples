
# 查找在某个路径下的所有源文件
aux_source_directory(. LIB_SRCS)
message(STATUS "LIB_SRCS=${LIB_SRCS}")

# 生成静态库 libfoo.a
add_library(foo STATIC ${LIB_SRCS})

# 生成动态库(不可和foo相同) libfood.so
add_library(food SHARED ${LIB_SRCS})
