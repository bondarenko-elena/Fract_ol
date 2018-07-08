/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:57:15 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 18:57:31 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc == 2 && ((ft_strcmp(argv[1], "1") == 0) || (ft_strcmp(argv[1], "2")
	== 0) || (ft_strcmp(argv[1], "3") == 0) || (ft_strcmp(argv[1], "4") == 0)))
	{
		map.fractal = ft_atoi(argv[1]);
		init_map(&map);
		draw(&map);
		event(&map);
		mlx_loop(map.mlx_init);
	}
	if (argc < 2 || argc > 2)
		ft_putendl("wrong number of arguments, you should choose just one");
	if (argc == 2 && ((ft_strcmp(argv[1], "1") != 0) || (ft_strcmp(argv[1], "2")
	!= 0) || (ft_strcmp(argv[1], "3") != 0) || (ft_strcmp(argv[1], "4") != 0)))
	{
		ft_putendl("choose fractals between 1 and 4 (1 - julia, 2 - mandelbrot,
			3 - burningship, 4 - douady rabbit");
	}
	return (0);
}
