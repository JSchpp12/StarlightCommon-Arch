# cmake_minimum_required (VERSION 3.8)
# find_package(Git)

# project(StarlightCommon VERSION 1.0.0 LANGUAGES CXX)
project("StarCommon")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MACOSX_RPATH 1)


set(CMM_HEADERS "include/GLSLShader.h" "include/Shader.h" "include/Enums.h" "include/Stage.h" "include/FileHelpers.h" "include/ResourceHolder.hpp")
set(CMM_SOURCE "src/GLSLShader.cpp" "src/Shader.cpp")

# target_include_directories(${PROJECT_NAME} PUBLIC 
#     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
# )
# add_library(${PROJECT_NAME} STATIC)
add_library(${PROJECT_NAME} INTERFACE ${CMM_HEADERS})

target_include_directories(${PROJECT_NAME} INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        # where top-level project will look for the library's public headers
        #$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        # where external projects will look for the library's public headers
        #$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "d")