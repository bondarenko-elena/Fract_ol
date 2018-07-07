/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:55:15 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 18:58:04 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	handle_key(int keycode, t_map *map)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 123)
		map->x1 += 30 / map->zoom;
	if (keycode == 124)
		map->x1 -= 30 / map->zoom;
	if (keycode == 125)
		map->y1 -= 30 / map->zoom;
	if (keycode == 126)
		map->y1 += 20 / map->zoom;
	if (keycode == 86 || keycode == 21)
	{
		map->fractal = 4;
		map->zoom = 300;
		map->max_iteration = 50;
	}
	mlx_clear_window(map->mlx_init, map->window);
	draw(map);
	switch_color(keycode, map);
	switch_fractal(keycode, map);
	return (1);
}
