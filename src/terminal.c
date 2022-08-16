#include <ocmos/terminal.h>

void putchar(char c)
{
    SERIALTERM = c;
}
