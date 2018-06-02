#include "fractol.h"

int	handle_key(t_map *map, int key_code)
{
	
	// map->color = 0xFF0000;
	// esc
	if (key_code == 53)
		exit(0);
	// arrow left
	if (key_code == 123)
		map->x1 += 30 / map->zoom;
	// arrow right
	if (key_code == 124)
		map->x1 -= 30 / map->zoom;
	// arrow up
	if (key_code == 126)
		map->y1 += 20 / map->zoom;
	// arrow down
	if (key_code == 125)
		map->y1 -= 30 / map->zoom;
	// 4 on the numpad and ont the general keydoard
	if (key_code == 21 || key_code == 86)
	{
		map->fractal = 4;
		map->zoom = 300;
		map->max_iteration = 50;
	}
	mlx_clear_window(map->mlx_init, map->window);
	draw(map);
	switch_color(map, key_code);
	switch_fractal(map, key_code);
	return (1);
}
