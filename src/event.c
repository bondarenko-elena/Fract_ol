void    event(t_map *map)
{
    mlx_key_hook(map->window, my_key_ft, e);
    mlx_mouse_hook(e->win, mouse_hook, e);
	mlx_hook(e->win, 6, 0, mouse_julia, e);
}