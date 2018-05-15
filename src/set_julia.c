#include "fractol.h"

/*
** cre, cim - real and imaginary part of the constant c, determines shape of the set.
** newz, oldz - new and old positions for Z, Z is initially the coordinates of the pixel, and will then constantly be updated through every iteration.
*/

void set_julia(t_map *map)
{
	float			tmp;

	map->cre = map->jul_x;
	map->cim = map->jul_y;
	map->newz = map->x / map->zoom + map->x1;
	map->oldz = map->y / map->zoom + map->y1;
	map->curr_iteration = 0;
	while (map->newz * map->newz + mыap->oldz * map->oldz < 4 && map->curr_iteration < map->max_iteration)
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
