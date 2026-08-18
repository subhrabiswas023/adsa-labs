cmake_minimum_required(VERSION 3.20)
project(adsa_labs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# LIbrary

file(GLOB_RECURSE LIB_SOURCES CONFIGURE_DEPENDS
${CMAKE_SOURCE_DIR}/src/*.cpp
)

add_library(adsa ${LIB_SOURCES})

target_include_directories(adsa PUBLIC ${CMAKE_SOURCE_DIR}/include)

# CLI

file(GLOB_RECURSE CLI_FILES CONFIGURE_DEPENDS
${CMAKE_SOURCE_DIR}/cli/*.cpp
)

foreach(cli ${CLI_FILES})
    file(RELATIVE_PATH rel ${CMAKE_SOURCE_DIR}/cli ${cli})
    string(REPLACE "/" "_" name ${rel})
    string(REPLACE ".cpp" "" name ${name})
    
    add_executable(${name} ${cli})
    target_link_libraries(${name} PRIVATE adsa)
endforeach()
    
target_compile_options(adsa PRIVATE -Wall)

# Tests

enable_testing()
add_subdirectory(tests)
