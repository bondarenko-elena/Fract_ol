#include "fractol.h"

void mlx(t_map *map)
{
	init_map(map);
	draw(map);
	event(map);

	puts("piu");
	
	mlx_loop(map->mlx_init);
}
