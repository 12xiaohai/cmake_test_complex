project(process)

# 添加动态库
add_library(${PROJECT_NAME} SHARED process.cpp)

# 添加头文件和依赖
target_include_directories(${PROJECT_NAME}
  PUBLIC
  ${PNC_Map_Dir}
)

# 链接动态库
target_link_libraries(${PROJECT_NAME}
  PUBLIC
  pnc_map
)

# 链接动态库 eigen3
target_link_libraries(${PROJECT_NAME}
  PUBLIC
  Eigen3::Eigen
)