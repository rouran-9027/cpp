cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(CppConsoleProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(include)

# 添加可执行文件
add_executable(CppConsoleProject src/main.cpp src/operators/sum.cpp src/operators/add.cpp)

# 添加测试
enable_testing()
add_subdirectory(tests)