cmake_minimum_required (VERSION 2.6)


project (OpenCascadeLearning)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "/usr/local/lib/cmake/opencascade/")

find_package(OpenCASCADE COMPONENTS FoundationClasses REQUIRED)
find_package(OpenCASCADE COMPONENTS ModelingData REQUIRED)
find_package(OpenCASCADE COMPONENTS DataExchange REQUIRED)
include_directories(${OpenCASCADE_INCLUDE_DIR})
set (LIBS ${LIBS} ${OpenCASCADE_LIBRARY_DIR})

add_executable(OpenCascadeLearning main.cpp)

target_link_libraries(OpenCascadeLearning ${LIBS})


