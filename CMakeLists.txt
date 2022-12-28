# Copyright (c) 2022 Innodisk crop.
# 
# This software is released under the MIT License.
# https://opensource.org/licenses/MIT

CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(showphc C)

AUX_SOURCE_DIRECTORY(./ showphc_src)

ADD_EXECUTABLE(${PROJECT_NAME} ${showphc_src})
