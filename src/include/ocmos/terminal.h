#pragma once
#include <stdint.h>

#define SERIALTERM *(volatile uint8_t *)0x2ff

void putchar(char c);
