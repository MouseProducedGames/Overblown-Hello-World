#include <stdbool.h>

bool alive;

bool application_alive()
{
    return alive;
}

void application_quit()
{
    alive = false;
}

void application_init()
{
    alive = true;
}

