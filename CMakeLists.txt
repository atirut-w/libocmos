add_library(ocmos STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/component.c)
target_include_directories(ocmos PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/include)
