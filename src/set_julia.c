#include "fractol.h"

/*
** cre, cim - real and imaginary part of the constant c, determines shape of the set.
** zx = scaled x coordinate of pixel (scaled to lie in the Mandelbrot X scale (-2.5, 1)); zx represents the real part of z
** zy = scaled y coordinate of pixel (scaled to lie in the Mandelbrot Y scale (-1, 1)); zy represents the imaginary part of z 
*/

void set_julia(t_map *map)
{
	float			tmp;

	map->cre = map->jul_x;
	map->cim = map->jul_y;
	map->zx = map->x / map->zoom + map->x1;
	map->zy = map->y / map->zoom + map->y1;
	map->curr_iteration = 0;
	while (map->zx * map->zx + map->zy * map->zy < 4 && map->curr_iteration < map->max_iteration)
	{
		tmp = map->zx;
		map->zx = map->zx * map->zx - map->zy * map->zy + map->cre;
		map->xy = 2 * map->zy * tmp + map->cim;
		map->curr_iteration++;
	}
	if (map->curr_iteration == map->max_iteration)
		//put_pxl_to_image(map, map->x, map->y);
		puts("do put_pixel");
	else
		//put_pxl_to_image2(map, map->x, map->y);
		puts("do put_pixel_2");
}
