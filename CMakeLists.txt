cmake_minimum_required(VERSION 3.25)

project(cmake_link_features)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED YES)
set(CMAKE_VERBOSE_MAKEFILE YES)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

add_subdirectory(static_example)
add_subdirectory(shared_example)


add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    shared_example
)
