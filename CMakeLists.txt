cmake_minimum_required(VERSION 3.29.0)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"      # 一个描述
    HOMEPAGE_URL "https://github.com/JackDawson6/03_cmake_planning_demo"        # github链接
    LANGUAGES CXX
)

add_definitions(-DDEBUG)  # 定义DEBUG宏

# 指定C++版本
set(CMAKE_CXX_STANDARD 17)      

# 变量和目录设置
# 以下这个变量设置会传到子目录里面的，也就是说子目录里面也可以用这个变量
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)   # 设置动态库以及exe的输出目录
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

# 添加子目录
add_subdirectory(src)

