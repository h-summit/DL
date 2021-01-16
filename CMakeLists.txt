cmake_minimum_required(VERSION 2.8.3)
project(dl)

add_compile_options(-std=c++11)
set(CMAKE_CXX_FLAGS "-O2")
find_package(CUDA)

include_directories( 
    include/
)

add_executable(sample src/sample.cpp)
# target_link_libraries(sample ${CUDA_LIBRARIES})
