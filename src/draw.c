#include "fractol.h"

void	draw(t_map *map)
{
	puts("piu");
	ft_bzero(map->data, map->size_line * 1000);
	map->img_x = (map->x2 - map->x1) * map->zoom;
	map->img_y = (map->y2 - map->y1) * map->zoom;
	map->x = 0;
	while (map->x < map->img_x)
	{
		map->y = 0;
		while (map->y < map->img_y)
		{
			if (map->fractal == 1)
				set_julia(map);
			 if (map->fractal == 2)
				set_mandelbrot(map);
			map->y++;
			if (map->y >= 1000)
				break ;
		}
		map->x++;
		if (map->x >= 1000)
			break ;
	}
	
	


	mlx_put_image_to_window(map->mlx_init, map->window, map->image, 0, 0);
	display_text(map);
}
