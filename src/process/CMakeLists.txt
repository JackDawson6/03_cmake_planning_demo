project(process)

# 创建一个动态库
add_library(${PROJECT_NAME}
SHARED
process.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_Map_Dir}
)


target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)