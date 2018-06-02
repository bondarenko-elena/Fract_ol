#include "fractol.h"

void	init_map(t_map *map)
{
	map->mlx_init = mlx_init();
	map->window = mlx_new_window(map->mlx_init, WIDTH, HEIGHT, "olbondar");
	map->mouse_switch = 1;
	map->x = 0;
	map->y = 0;
	map->zoom = 300;
	map->max_iteration = 50;
	map->color_red = 255;
	map->color_green = 170;
	map->color_blue = 255;
	map->image = mlx_new_image(map->mlx_init, WIDTH, HEIGHT);
	map->data = mlx_get_data_addr(map->image, &(map->bits_per_pixel), &(map->size_line), &(map->endian));
	
	map->x1 = -2.05;
	map->y1 = -1.3;
	map->x2 = 2;
	map->y2 = 2;
}
