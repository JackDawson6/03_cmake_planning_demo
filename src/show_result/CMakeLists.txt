project(show_result)

# 创建一个动态库
add_library(${PROJECT_NAME}
SHARED
show_result.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)


target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)


target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)