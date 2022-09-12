#include "ocmos/mmu.h"
#include <stdint.h>

int get_bank_count()
{
    return (*(uint8_t*)0x210 << 8) | *(uint8_t*)0x200;
}
