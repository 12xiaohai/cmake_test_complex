project(show_result)

# 添加动态库
add_library(${PROJECT_NAME}
  SHARED
  show_result.cpp
)

# 添加头文件和依赖
target_include_directories(${PROJECT_NAME}
  PUBLIC
  ${Process_Dir}
)

# 链接动态库 process
target_link_libraries(${PROJECT_NAME}
  PUBLIC
  process
)

# 链接动态库 easyx
target_link_libraries(${PROJECT_NAME}
  PUBLIC
  easyx
)
