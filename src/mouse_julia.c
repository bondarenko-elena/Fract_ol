#include "fractol.h"

int mouse_julia(t_map *map, int x, int y)
{
    if (map->mouse_switch == 1)
    {
        map->jul_x = (double)x / (double)(map->zoom / 2) - 1;
        map->jul_y = (double)y / (double)(map->zoom / 2) - 1;
    }
    draw(map);
    return (0);
}