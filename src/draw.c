/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 10:50:10 by thgiraud          #+#    #+#             */
/*   Updated: 2018/07/07 16:09:45 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void				draw(t_map *map)
{
	ft_bzero(map->get_data_addr, map->size_line * 1000);
	map->img_x = (map->x2 - map->x1) * map->zoom;
	map->img_y = (map->y2 - map->y1) * map->zoom;
	map->x = 0;
	while (map->x++ < map->img_x)
	{
		map->y = 0;
		while (map->y++ < map->img_y)
		{
			if (map->fractal == 1)
				set_julia(map);
			if (map->fractal == 2)
				set_mandelbrot(map);
			if (map->fractal == 3)
				set_burningship(map);
			if (map->fractal == 4)
				set_douady(map);
			if (map->y >= 1000)
				break ;
		}
		if (map->x >= 1000)
			break ;
	}
	mlx_put_image_to_window(map->mlx_init, map->window, map->image, 0, 0);
	display_text(map);
}
