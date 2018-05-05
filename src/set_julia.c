#include "fractol.h"

void set_julia(t_map *map)
{
	int x;
	int y;
	int i;

	// x = 0;
	x = 100;
	// y = 0;
	y = 100;
	i = 0;
	
	//real and imaginary part of the constant c, determinate shape of the Julia Set
	map->cRe = -0.7;
	map->cIm = 0.27015;
	//draw the fractal
	while (y < HEIGHT)
	{	
		while (x < WIDTH)
		{
			//calculate the initial real and imaginary part of z, based on the pixel location and zoom and position values
			map->newRe = 1.5 * (x - WIDTH / 2) / (0.5 * map->zoom * WIDTH) + map->moveX;
			map->newIm = (y - HEIGHT / 2) / (0.5 * map->zoom * HEIGHT) + map->moveY;
      		//i will represent the number of iterations, start the iteration process
			// && if the point is outside the circle with radius 2: stop 
      		while ((i < map->max_iteration) && ((map->newRe * map->newRe + map->newIm * map->newIm) < 4))
      		{
      			//remember value of previous iteration
      			map->oldRe = map->newRe;
        		map->oldIm = map->newIm;
        		//the actual iteration, the real and imaginary part are calculated
        		map->newRe = map->oldRe * map->oldRe - map->oldIm * map->oldIm + map->cRe;
        		map->newIm = 2 * map->oldRe * map->oldIm + map->cIm;
				i++;
			}

    		mlx_pixel_put(map->mlx_init, map->window, x, y, map->color);
			map->color = map->color >> 1;
			x++;
		}
		y++;
	}
}