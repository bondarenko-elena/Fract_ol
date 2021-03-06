/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_julia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 19:05:18 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 19:05:21 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int				mouse_julia(int x, int y, t_map *map)
{
	if (map->mouse_switch == 1)
	{
		map->juls_x = (double)x / (double)(map->zoom / 2) - 1;
		map->juls_y = (double)y / (double)(map->zoom / 2) - 1;
	}
	draw(map);
	return (0);
}
