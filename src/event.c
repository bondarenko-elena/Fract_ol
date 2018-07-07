#include "../includes/fractol.h"

void			event(t_map *map)
{
	mlx_key_hook(map->window, handle_key, map);
	mlx_mouse_hook(map->window, mouse_hook, map);
	mlx_hook(map->window, 6, 0, mouse_julia, map);
}