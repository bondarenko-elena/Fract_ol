#include "fractol.h"

void    put_pixel_2(t_map *map, int x, int y)
{
    unsigned char red;
    unsigned char green;
    unsigned blue;

    red = (map->curr_iteration * map->color_red / map->max_iteration * 4);
	green = (map->curr_iteration * map->color_green / map->max_iteration * 2);
	blue = (map->curr_iteration * map->color_blue / map->max_iteration * 4);
    map->data[(x * 4) + (y * map->size_line) + 2] = red;
    map->data[(x * 4) + (y * map->size_line) + 1] = green;
	map->data[(x * 4) + (y * map->size_line)] = blue;
}