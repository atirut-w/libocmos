#pragma once

#define COMPLIST_PORT *(volatile uint8_t *)0x246
#define COMPNAME_LEN 16

typedef struct component
{
    char name[COMPNAME_LEN]; // Name of the component
    char uuid[16]; // UUID of the component
} component_t;

void start_component_list();
void read_component(component_t *buf);
void next_component();
