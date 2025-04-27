project(planning_main)

# 添加子目录
add_subdirectory(pnc_map)
add_subdirectory(process)

# 添加可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)

# 添加头文件和依赖
target_include_directories(${PROJECT_NAME}
  PUBLIC
  ${Process_Dir}
)

# 链接动态库
target_link_libraries(${PROJECT_NAME}
  PUBLIC
  process
)