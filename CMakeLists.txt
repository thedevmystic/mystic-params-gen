# -----------------------------------------------------------------------------
# Copyright 2026-present Suryansh Singh
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# -----------------------------------------------------------------------------
# @path [ROOT]/CMakeLists.txt
# @file CMakeLists.txt
# @brief CMake build configuration file for the project.
#
# @author thedevmystic (Surya) <thedevmystic@gmail.com>
# @copyright 2026-present Suryansh Singh Apache-2.0 License
#
# SPDX-FileCopyrightText: 2026-present Suryansh Singh
# SPDX-License-Identifier: Apache-2.0
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
#  _____ ______       ___    ___ ________  _________  ___  ________     
# |\   _ \  _   \    |\  \  /  /|\   ____\|\___   ___\\  \|\   ____\    
# \ \  \\\__\ \  \   \ \  \/  / | \  \___|\|___ \  \_\ \  \ \  \___|    
#  \ \  \\|__| \  \   \ \    / / \ \_____  \   \ \  \ \ \  \ \  \       
#   \ \  \    \ \  \   \/  /  /   \|____|\  \   \ \  \ \ \  \ \  \____  
#    \ \__\    \ \__\__/  / /       ____\_\  \   \ \__\ \ \__\ \_______\
#     \|__|     \|__|\___/ /       |\_________\   \|__|  \|__|\|_______|
#                   \|___|/        \|_________|                         
# -----------------------------------------------------------------------------
# Mystic Framework — Modern C++23 Framework by thedevmystic :)
# -----------------------------------------------------------------------------

# TODO: Will be rewritten.
                                                                      
cmake_minimum_required(VERSION 3.30)

# Read version from VERSION file
file(READ "${CMAKE_SOURCE_DIR}/VERSION" RAW_VERSION)
string(STRIP "${RAW_VERSION}" PROJECT_VERSION)
project(mystic_params_gen VERSION ${PROJECT_VERSION} LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Project information
message(STATUS "----------------------------------------")
message(STATUS "mystic-params-gen - Version ${PROJECT_VERSION}")
message(STATUS "CMake Version: ${CMAKE_VERSION}")
message(STATUS "C++ Standard: C++${CMAKE_CXX_STANDARD}")
message(STATUS "----------------------------------------")

# Include directories
include_directories("${CMAKE_SOURCE_DIR}/include")
include_directories("${CMAKE_SOURCE_DIR}/third_party")

# Executable target
add_executable(mystic_params_gen
  src/test_dummy.cpp
  src/main.cpp
)

# Tests
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(mystic_params_gen_tests
    src/test_dummy.cpp
    tests/test_main.cpp
)
target_link_libraries(mystic_params_gen_tests GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(mystic_params_gen_tests)
