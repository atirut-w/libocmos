#pragma once

#define SERIALTERM (volatile unsigned char *)0x2ff

inline void putchar(char c)
{
    SERIALTERM = c;
}
