# SPDX-License-Identifier: Apache-2.0
set(CMAKE_VERBOSE_MAKEFILE ON)

list(APPEND ZEPHYR_EXTRA_MODULES ../libzmq/)

cmake_minimum_required(VERSION 3.13.1)

include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(hello_world)

target_sources(app PRIVATE src/main.cpp)
