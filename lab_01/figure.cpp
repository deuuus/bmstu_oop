#include "figure.h"

figure_t init()
{
    figure_t figure;

    figure.points.arr = nullptr;
    figure.points.size = 0;

    figure.center.x = 0;
    figure.center.y = 0;
    figure.center.z = 0;

    figure.links.arr = nullptr;
    figure.links.size = 0;

    return figure;
}

rc_t load_data(figure_t &figure, filename_t name) 
{
    FILE *f = fopen(name, "r");
    if (!f)
    {
        return ERR_FILE;
    }
    
}
