/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:24:25 by thgiraud          #+#    #+#             */
/*   Updated: 2018/07/07 16:11:18 by olbondar         ###   ########.fr       */
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
