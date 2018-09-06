#include "app.h"
#include "console.h"
#include "data.h"

void application_draw();

void application_update();

void application_draw()
{
    write_line(hello_text());
}

void application_run()
{
    while (application_alive())
    {
        application_draw();
        application_update();
    }
}

void application_update()
{
    application_quit();
}

