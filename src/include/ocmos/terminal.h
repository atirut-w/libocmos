#pragma once
#include <stdint.h>

#define SERIALTERM *(volatile uint8_t *)0x2ff

inline void putchar(char c)
{
    SERIALTERM = c;
}
