#include "fractol.h"

int switch_color(t_map *map, int keycode)
{
    // "+"" on the numpad
    if (keycode == 69)
        map->color_red /= 2;
    // "-" on the numpad
    if (keycode == 78)
        map->color_red *= 2;
    // "/" on the numpad
    if (keycode == 75)
        map->color_green /= 2;
    // "*" on the numpad
    if (keycode == 67)
        map->color_green *= 2;
    // "0" on the numpad
    if (keycode == 82)
        map->color_blue /= 2;
    // "=" on the numpad
    if (keycode == 81)
        map->color_blue *= 2;
    // "enter" ---> to start mouse
    if (keycode == 36 || keycode == 76)
        map->mouse_switch = 1;
    // "." on the general pad ---> sto top mouse
    if (keycode == 65)
        map->mouse_switch = 0;
    // "i" on the general pad ---> to increase iteration
    if (keycode == 34)
        map->max_iteration += 5;
    mlx_clear_window(map->mlx_init, map->window);
    draw(map);
    return (1);
}