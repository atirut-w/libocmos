#pragma once

typedef struct component
{
    char name[16]; // Name of the component
    char uuid[16]; // UUID of the component
} component_t;

void start_component_list();
void read_component(component_t *buf);
void next_component();
