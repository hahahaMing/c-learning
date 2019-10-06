cmake_minimum_required(VERSION 2.8)
project( Fast_test )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR})

add_executable( Fast_test main.cpp)
target_link_libraries( Fast_test ${OpenCV_LIBS} )
