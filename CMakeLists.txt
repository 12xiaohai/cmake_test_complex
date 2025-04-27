cmake_minimum_required(VERSION 3.10)
project(planning
  VERSION 0.0.1
  DESCRIPTION "a demo of complex cmake test"
  HOMEPAGE_URL "https://github.com/12xiaohai/cmake_test_complex"
  LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)

# 变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_CURRENT_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_CURRENT_SOURCE_DIR}/src/pnc_map)

# 添加子目录
add_subdirectory(src)