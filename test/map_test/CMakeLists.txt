project(map_test)

add_executable(${PROJECT_NAME}
    map_test.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
    ${PNC_Map_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)

add_test(
    NAME map_info_test      # 测试名称
    COMMAND ${PROJECT_NAME}     # 命令就是可执行文件名称
)