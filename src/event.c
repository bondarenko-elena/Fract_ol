/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:53:40 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 18:57:57 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	event(t_map *map)
{
	mlx_key_hook(map->window, handle_key, map);
	mlx_mouse_hook(map->window, mouse_hook, map);
	mlx_hook(map->window, 6, 0, mouse_julia, map);
}
