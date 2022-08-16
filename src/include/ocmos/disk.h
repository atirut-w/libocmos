#pragma once
#include <stdint.h>

typedef struct disk
{
    uint16_t uuid;      // First two bytes of the disk's UUID
    uint8_t sectorsize; // Sector size in units of 256 bytes
    uint8_t rw;         // Serial read/write port
    uint16_t size;      // Size of the disk in units of sectors
    uint16_t sector;    // Current sector for read/write
} disk_t;
