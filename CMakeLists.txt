add_library(ocmos STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/component.c)
target_include_directories(ocmos PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/include)

target_compile_options(ocmos PRIVATE -O3) # O3 go brrrr
