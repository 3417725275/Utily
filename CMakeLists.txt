
cmake_minimum_required (VERSION 3.8)

project("Util" VERSION 1.0 DESCRIPTION "Util" LANGUAGES CXX)

include(../3rdParty/cmake/ObvCmakeFunctions.cmake)
init_obv_cmake(${CMAKE_CURRENT_SOURCE_DIR} true)

set(CMAKE_CXX_STANDARD 17)
# 包含子项目。
add_subdirectory ("src")
