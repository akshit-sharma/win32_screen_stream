cmake_minimum_required(VERSION 3.8)
project(screenshot)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(D3D11 REQUIRED)

MESSAGE ( STATUS "Value of include is ${D3D11_INCLUDE_PATH}" )
MESSAGE ( STATUS "Value of libraries is ${D3D11_LIBRARIES}" )

include_directories(${D3D11_INCLUDE_PATH})

add_executable(screenshot WIN32
    src/common.h
    src/main.cpp
)           

target_link_libraries(screenshot ${D3D11_LIBRARIES})
