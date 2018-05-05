#include "fractol.h"

void mlx(t_map *map)
{
	map->mlx_init = mlx_init();
	map->window = mlx_new_window(map->mlx_init, WIDTH, HEIGHT, "olbondar");
	map->color = 0x00FF00;
	map->iter_x = 0;
	map->iter_y = 0;
	//you can change these to zoom and change position
	map->zoom = 300;
	// map->moveX = 0;
	// map->moveY = 0;
	map->x1 = -2.05;
	map->x2 = 2;
	map->y1 = -1.3;
	map->y2 = 2;
	map->color_red = 255;
	map->color_green = 170;
	map->color_blue = 255;
	map->max_iteration = 50;
	map->image = mlx_new_image(map->mlx_init, WIDTH, HEIGHT);
	//mlx_get_data_addr ( void *img_ptr, int *bits_per_pixel, int *size_line, int *endian );
	// map->get_data_addr = mlx_get_data_addr(map->image, &map->bits_per_pixel, &map->size_line, &map->endian);
	//img_ptr parameter specifies the image to use
	//bits_per_pixel will be filled with the number of bits needed to represent a pixel color (also called the depth of the image). 
	//size_line is the number of bytes used to store one line of the image in memory. This information is needed to move from one line to another in the image. 
	//endian tells you wether the pixel color in the image needs to be stored in little endian (endian == 0), or big endian (endian == 1).
	
	map->img_x = (map->x2 - map->x1) * map->zoom;
	map->img_y = (map->y2 - map->y1) * map->zoom;
	map->iter_x = 0;
	
	while (map->iter_x < map->img_x)
	{
		map->iter_y = 0;
		while (map->iter_y < map->img_y)
		{
			puts("check");
			if (map->fractal == 1)
				set_julia(map);
			// if (map->fractal == 2)
				// set_mandelbrot(map);
			map->iter_y++;
		}
		map->iter_x++;
	}

	


	mlx_put_image_to_window(map->mlx_init, map->window, map->image, 0, 0);
	show_text(map);
	// event(t_map *map);
	mlx_key_hook(map->window, handle_key, map);
	mlx_loop(map->mlx_init);
}
