cmake_minimum_required(VERSION 3.13)
project(CProject)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(./googletest/)
set(LIBRARIES
        gtest
        pthread)

add_executable(CProject com.bp.algorithm/T00936.cpp com.bp.algorithm/T00001.cpp)
target_link_libraries(CProject ${LIBRARIES})