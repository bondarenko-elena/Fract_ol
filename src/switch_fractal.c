/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch_fractal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 19:16:37 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 19:16:42 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	switch_fractal(int keycode, t_map *map)
{
	if (keycode == 18 || keycode == 83)
	{
		map->fractal = 1;
		INIT(map->zoom, map->max_iteration);
	}
	if (keycode == 19 || keycode == 84)
	{
		map->fractal = 2;
		INIT(map->zoom, map->max_iteration);
	}
	if (keycode == 20 || keycode == 85)
	{
		map->fractal = 3;
		INIT(map->zoom, map->max_iteration);
	}
	if (keycode == 86 || keycode == 21)
	{
		map->fractal = 4;
		INIT(map->zoom, map->max_iteration);
	}
	mlx_clear_window(map->mlx_init, map->window);
	draw(map);
	return (1);
}
