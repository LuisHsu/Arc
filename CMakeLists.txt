cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
project(Arc)
ADD_SUBDIRECTORY (luison_src)
ADD_SUBDIRECTORY (src)
