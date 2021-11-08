cmake_minimum_required(VERSION 3.20)

project(InputProviderSample)

set(CMAKE_CXX_STANDARD 11)

add_library(InputProviderSample SHARED Input.cpp)

#find_library(
#        log-lib
#        log)
#
#target_link_libraries(
#    InputProviderSample
#    ${log-lib})

include_directories("Headers")