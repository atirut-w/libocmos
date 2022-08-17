add_library(ocmos STATIC src/component.c src/disk.c src/terminal.c src/mmu.c)
target_include_directories(ocmos PUBLIC src/include)
