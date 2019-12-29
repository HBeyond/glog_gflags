cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD11)


#find_package(Gflags REQUIRED)

project(ubuntu_ori_glog_gflags)

#include_directories(${GFLAGS_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} "main.cpp")

# 2. use the glog and gflags in ubuntu: /usr/lib/x86_64-linux-gnu
target_link_libraries(${PROJECT_NAME} glog gflags)
