project(shared_example)

add_library(${PROJECT_NAME} SHARED)

target_sources(${PROJECT_NAME} PRIVATE
    shared_example.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    "$<LINK_GROUP:RESCAN,static_example_internal,static_example>"
)

target_link_options(${PROJECT_NAME} PRIVATE
    -Wl,--exclude-libs,ALL
)
