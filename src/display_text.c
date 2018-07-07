/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:49:32 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 18:57:41 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	display_text(t_map *map)
{
	mlx_string_put(map->mlx_init, map->window, 10, 5, 0xFF00FF, "Fract'ol");
	mlx_string_put(map->mlx_init, map->window, 10, 25, 0xFF00FF,
			"The choosen fractal is : ");
	if (map->fractal == 1)
		mlx_string_put(map->mlx_init, map->window, 10, 40, 0xFF00FF, "Julia");
	if (map->fractal == 2)
		mlx_string_put(map->mlx_init, map->window, 10, 40, 0xFF00FF,
				"Mandelbrot");
	if (map->fractal == 3)
		mlx_string_put(map->mlx_init, map->window, 10, 40, 0xFF00FF,
				"Burningship");
	if (map->fractal == 4)
		mlx_string_put(map->mlx_init, map->window, 10, 40, 0xFF00FF, "Douady");
}
