#include "ocmos/component.h"

void start_component_list()
{
    *COMPLIST_PORT = 0xff;
}

void read_component(component_t *buf)
{
    for (int i = 0; i < COMPNAME_LEN; i++)
    {
        buf->name[i] = *COMPLIST_PORT;
        if (buf->name[i] == 0)
        {
            break;
        }
        else if (buf->name[i] == 0xff)
        {
            return;
        }
    }

    for (int i = 0; i < 16; i++)
    {
        buf->uuid[i] = *COMPLIST_PORT;
    }
}

void next_component()
{
    *COMPLIST_PORT = 0;
}
