#include "fractol.h"

void    event(t_map *map)
{
    mlx_key_hook(map->window, my_key_ft, map);
    mlx_mouse_hook(map->win, mouse_hook, map);
	mlx_hook(map->win, 6, 0, mouse_julia, map);
}