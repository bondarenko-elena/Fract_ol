#include "../includes/fractol.h"

int				mouse_hook(int button, int x, int y, t_map *map)
{
	// printf("keycode == %d\n", button);
	if (button == 5 || button == 1)
	{
		map->x2 = x;
		map->y2 = y;
		map->x1 = (x / map->zoom + map->x1) - ((map->zoom * 1.3) / 2);
		map->x1 += ((map->zoom * 1.3) / 2) - (x / (map->zoom * 1.3));
		map->y1 = (y / map->zoom + map->y1) - ((map->zoom * 1.3) / 2);
		map->y1 += ((map->zoom * 1.3) / 2) - (y / (map->zoom * 1.3));
		map->zoom *= 1.3;
		map->max_iteration++;
	}
	if (button == 4 || button == 2)
	{
		map->x1 = (map->x2 / map->zoom + map->x1) - ((map->zoom / 1.3) / 2);
		map->x1 += ((map->zoom / 1.3) / 2) - (map->x2 / (map->zoom / 1.3));
		map->y1 = (map->y2 / map->zoom + map->y1) - ((map->zoom / 1.3) / 2);
		map->y1 += ((map->zoom / 1.3) / 2) - (map->y2 / (map->zoom / 1.3));
		map->zoom /= 1.3;
		map->max_iteration--;
	}
	mlx_clear_window(map->mlx_init, map->window);
	draw(map);
	return (1);
}