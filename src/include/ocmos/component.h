#pragma once

#define COMPLIST_PORT (volatile unsigned char *)0x246
#define COMPNAME_LEN 16

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    char name[COMPNAME_LEN]; // Name of the component
    char uuid[16]; // UUID of the component
} component_t;

void start_component_list();
void read_component(component_t *buf);
void next_component();

#ifdef __cplusplus
}
#endif
