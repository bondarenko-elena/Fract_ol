#include "fractol.h"

int	handle_key(int key_code, t_map *map)
{
	
	map->color = 0xFF0000;
	if (key_code == 53)
		exit(0);
	return (0);
}
