cmake_minimum_required(VERSION 3.24)
project(39_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(QtConsoleApplication14)
include_directories(QtConsoleApplication14/x64/Debug/moc)
include_directories(QtConsoleApplication14/x64/Debug/uic)

add_executable(39_2
        QtConsoleApplication14/x64/Debug/moc/moc_window.cpp
        QtConsoleApplication14/x64/Debug/uic/ui_window.h
        QtConsoleApplication14/main.cpp
        QtConsoleApplication14/window.cpp
        QtConsoleApplication14/window.h)
