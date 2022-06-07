cmake_minimum_required (VERSION 3.8)
include("${THIRD_PARTY}/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(Util)
file(GLOB_RECURSE DIR_SRCS "${CMAKE_SOURCE_DIR}/src/*.*")
add_executable (Util ${DIR_SRCS})

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME ON)

find_package(Boost REQUIRED)
if(Boost_FOUND)
	MESSAGE( STATUS "Boost_INCLUDE_DIRS = ${Boost_INCLUDE_DIRS}.")
    target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})
endif()
