#include "../includes/fractol.h"

void			put_pixel_2(t_map *map, int x, int y)
{
	unsigned char	red;
	unsigned char	green;
	unsigned char	blue;

	red = (map->current_iteration * map->color_red / map->max_iteration * 4);
	green = (map->current_iteration * map->color_green / map->max_iteration * 2);
	blue = (map->current_iteration * map->color_blue / map->max_iteration * 4);
	map->get_data_addr[(x * 4) + (y * map->size_line) + 2] = red;
	map->get_data_addr[(x * 4) + (y * map->size_line) + 1] = green;
	map->get_data_addr[(x * 4) + (y * map->size_line)] = blue;	
}