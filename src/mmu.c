#include "ocmos/mmu.h"

int get_bank_count()
{
    return (*(uint8_t*)0x210 << 8) | *(uint8_t*)0x200;
}
