#include "fractol.h"
#include <stdio.h>

void set_mandelbrot(t_map *map)
{
	map->color = map->color >> 1;
	puts("do mandelbrot");
}