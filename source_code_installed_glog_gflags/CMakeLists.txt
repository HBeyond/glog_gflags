cmake_minimum_required(VERSION 2.8)

project(source_code_installed_glog_gflags)

# 1. use the installed glog and gflags step 1.1
find_package(Glog REQUIRED)
find_package(Gflags REQUIRED)
list(APPEND DEPEND_INC_DIRS ${GLOG_INCLUDE_DIRS} ${GFLAGS_INCLUDE_DIRS})
list(APPEND DEPEND_LIBS glog gflags)

add_executable(${PROJECT_NAME} "main.cpp")

# 1. use the installed glog and gflags step 1.2
include_directories(${DEPEND_INC_DIRS})
target_link_libraries(${PROJECT_NAME} ${DEPEND_LIBS})
