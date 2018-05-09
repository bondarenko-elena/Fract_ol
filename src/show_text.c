#include "fractol.h"

void    show_text(t_map *map)
{
    mlx_string_put(map->mlx_init, map->window, 10, 5, 0xFF00FF, "Fract'ol");
    mlx_string_put(map->mlx_init, map->window, 10, 25, 0xFF00FF, "The choosen fractal is : ");
    if (map->fractal == 1)
        mlx_string_put(map->mlx_init, map->window, 10, 40, 0xFF00FF, "Julia");
    if (map->fractal == 2)
        mlx_string_put(map->mlx_init, map->window, 10, 40, 0xFF00FF, "Mandelbrot");
}