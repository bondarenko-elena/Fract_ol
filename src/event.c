#include "fractol.h"

void    event(t_map *map)
{
    //my_key_ft
    mlx_key_hook(map->window, handle_key, map);
    //mouse_hook
    mlx_mouse_hook(map->window, mouse_move, map);
	mlx_hook(map->window, 6, 0, mouse_julia, map);
}