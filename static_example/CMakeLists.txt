project(static_example)

# internal
set(STATIC_INTERNAL ${PROJECT_NAME}_internal)
add_library(${STATIC_INTERNAL} STATIC)

target_sources(${STATIC_INTERNAL} PRIVATE
    static_internal.cpp
)

target_include_directories(${STATIC_INTERNAL} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_options(${STATIC_INTERNAL} PRIVATE
    -fPIC
)

# public
add_library(${PROJECT_NAME} STATIC)

target_sources(${PROJECT_NAME} PRIVATE
    static_example.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_options(${PROJECT_NAME} PRIVATE
    -fPIC
)


