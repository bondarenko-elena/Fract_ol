/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 19:16:09 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 19:16:15 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	switch_color(int keycode, t_map *map)
{
	if (keycode == 69)
		map->color_red /= 2;
	if (keycode == 78)
		map->color_red *= 2;
	if (keycode == 75)
		map->color_green /= 2;
	if (keycode == 67)
		map->color_green *= 2;
	if (keycode == 82)
		map->color_blue /= 2;
	if (keycode == 81)
		map->color_blue *= 2;
	if (keycode == 76 || keycode == 36)
		map->mouse_switch = 1;
	if (keycode == 65)
		map->mouse_switch = 0;
	if (keycode == 34)
		map->max_iteration += 5;
	mlx_clear_window(map->mlx_init, map->window);
	draw(map);
	return (1);
}
