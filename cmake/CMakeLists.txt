cmake_minimum_required(VERSION 3.0)
project(pybind11_playground)

find_package(pybind11 REQUIRED)
pybind11_add_module(pybind11_playground ../src/pybind11_playground.cpp)
