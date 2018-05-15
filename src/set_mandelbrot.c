#include "fractol.h"
#include <stdio.h>

/*
** cre, cim - real and imaginary part of the constant c, determines shape of the set
** newz, oldz - you can change these to zoom and change position
*/

void set_mandelbrot(t_map *map)
{
	float			tmp;

	map->newz = 0;
	map->oldz = 0;
	map->curr_iteration = 0;
	map->cre = map->x / map->zoom + map->x1;
	map->cim = map->y / map->zoom + map->y1;

	while (map->newz * map->newz + map->oldz * map->oldz < 4 && map->curr_iteration < map->max_iteration)
	{
		tmp = map->newz;
		map->newz = map->newz * map->newz - map->oldz * map->oldz + map->cre;
		map->oldz = 2 * map->oldz * tmp + map->cim;
		map->curr_iteration++;
	}
	if (map->curr_iteration == map->max_iteration)
		//put_pxl_to_image(map, map->x, map->y);
		puts("do put_pxl_to_image");
	else
		//put_pxl_to_image2(map, map->x, map->y);
		puts("do put_pxl_to_image");
}
