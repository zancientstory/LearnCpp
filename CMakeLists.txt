cmake_minimum_required(VERSION 3.10)
project(cpp)
#查找头文件
include_directories(
        include
)

add_executable(${PROJECT_NAME} src/main.cpp src/chapter2/chapter2.cpp
        src/chapter2/vector.cpp
        src/chapter6/chapter6.cpp
        src/chapter7/chapter7.cpp
        src/chapter8/chapter8.cpp
        src/chapter10/chapter10.cpp
)

