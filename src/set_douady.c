#include "../includes/fractol.h"

void				set_douady(t_map *map)
{
	double			tmp;

	map->z_r = map->x / map->zoom + map->x1;
	map->z_i = map->y / map->zoom + map->y1;
	map->c_r = -0.12;
	map->c_i = 0.75;
	map->current_iteration = 0;
	while (map->z_r * map->z_r + map->z_i * map->z_i < 4 && map->current_iteration < map->max_iteration)
	{
		tmp = map->z_r;
		map->z_r = map->z_r * map->z_r - map->z_i * map->z_i + map->c_r;
		map->z_i = 2 * map->z_i * tmp + map->c_i;
		map->current_iteration++;
	}
	if (map->current_iteration == map->max_iteration)
		put_pixel(map, map->x, map->y);
	else
		put_pixel_2(map, map->x, map->y);
}