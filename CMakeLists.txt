cmake_minimum_required(VERSION 3.15)

project(CPP_ProjectTemplate
    VERSION 0.1
    DESCRIPTION "A C++ project template using CMake"
    LANGUAGES CXX
)

set(CMAKE_CXX_STATNDARD 20)
SET(CMAKE_CXX_STATNDARD_REQUIRED ON)
SET(CMAKE_EXTENSIONS OFF)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCES
    src/main.cpp
    src/include/foo.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

message(STATUS "Project: ${PROJECT_NAME} v${PROJECT_VERSION}")
