project(pnc_map)

# 创建一个动态库
add_library(${PROJECT_NAME}
SHARED
pnc_map.cpp
)

