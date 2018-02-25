#include "fractol.h"

void mlx(t_map *map)
{
	map->color = 0x00FF00;
	//you can change these to zoom and change position
	map->zoom = 1;
	map->moveX = 0;
	map->moveY = 0;
	map->color_red = 255;
	map->color_green = 170;
	map->color_blue = 255;
	map->max_iteration = 50;
	
	map->mlx_init = mlx_init();;
	map->window = mlx_new_window(map->mlx_init, WIDTH, HEIGHT, "olbondar");
	// map->image = mlx_new_image(map->mlx_init, WIDTH, HEIGHT);
	//mlx_get_data_addr ( void *img_ptr, int *bits_per_pixel, int *size_line, int *endian );
	//img_ptr parameter specifies the image to use
	//bits_per_pixel will be filled with the number of bits needed to represent a pixel color (also called the depth of the image). 
	//size_line is the number of bytes used to store one line of the image in memory. This information is needed to move from one line to another in the image. 
	//endian tells you wether the pixel color in the image needs to be stored in little endian (endian == 0), or big endian (endian == 1).
	
	// map->get_data_addr = mlx_get_data_addr(map->image, &map->bits_per_pixel, &map->size_line, &map->endian);
	
	if (map->fractal == 1)
		set_julia(map);
	// if (map->fractal == 2)
		// set_mandelbrot(map);

	// mlx_put_image_to_window(map->mlx_init, map->window, map->image, 0, 0);
	mlx_key_hook(map->window, handle_key, map);
	mlx_loop(map->mlx_init);
}
