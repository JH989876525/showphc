# Copyright (c) 2022 Innodisk crop.
# 
# This software is released under the MIT License.
# https://opensource.org/licenses/MIT

CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(showphc C)

# core
AUX_SOURCE_DIRECTORY(./ showphc_src)

# TARGET_INCLUDE_DIRECTORIES(_showphc PUBLIC inc)
ADD_EXECUTABLE(${PROJECT_NAME} ${showphc_src})
# TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC inc)
# TARGET_LINK_LIBRARIES(${PROJECT_NAME} _showphc)

