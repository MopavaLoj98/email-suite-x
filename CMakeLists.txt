cmake_minimum_required(VERSION 3.16)
project(email-suite-x CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(emailsuitex
    src/main.cpp
    src/providers.cpp
    src/manager.cpp
)

target_include_directories(emailsuitex PRIVATE include)

if(WIN32)
    target_link_libraries(emailsuitex PRIVATE userenv)
endif()
