//mouse_hook
#include "fractol.h"

int mouse_move(t_map *map, int keycode, int x, int y)
{
    if (keycode == 1 || keycode == 5)
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
    if (keycode == 2 || keycode == 4)
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