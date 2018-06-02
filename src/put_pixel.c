#include "fractol.h"

void    put_pixel(t_map *map, int x, int y)
{
    unsigned char red;
    unsigned char green;
    unsigned blue;

    // black
    map->color = 0x000000;
    red = ((map->color & 0xFF0000) >> 16);
	green = ((map->color & 0xFF00) >> 8);
	blue = (map->color & 0xFF);
    map->data[(x * 4) + (y * map->size_line) + 2] = red;
    map->data[(x * 4) + (y * map->size_line) + 1] = green;
	map->data[(x * 4) + (y * map->size_line)] = blue;
}