cmake_minimum_required(VERSION 3.1)

project(fechas
    VERSION 1.0
    DESCRIPTION: "Fechas consecutivas"
    LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR/lib})

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(tools src/tools.cc)
add_executable(complejos
    src/funciones.h
    src/complejos.cc
    src/funciones.cc

)
target_link_libraries(fechas tools)

target_compile_features(fechas PRIVATE cxx_std_14)

target_compile_options(fechas PRIVATE   -Wall -Wextra -Wpedantic)


