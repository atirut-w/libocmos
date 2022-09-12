#include "ocmos/disk.h"

void read_sector(disk_t *disk, uint8_t *buffer)
{
    for (int i = 0; i < disk->sectorsize * 256; i++)
    {
        buffer[i] = disk->rw;
    }
}
