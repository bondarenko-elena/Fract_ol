/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 11:24:29 by thgiraud          #+#    #+#             */
/*   Updated: 2018/07/07 16:19:18 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <math.h>
# include "../libft/libft.h"
# include <stdio.h>

# define WIDTH 1000
# define HEIGHT 1000

typedef struct			s_map
{
	double			c_i;
	double			c_r;
	double			h;
	double			current_iteration;
	double			img_x;
	double			img_y;
	double			juls_x;
	double			juls_y;
	double			x1;
	double			x2;
	double			x;
	double			y1;
	double			y2;
	double			y;
	double			z_i;
	double			z_r;
	double			zoom;
	unsigned long	color;
	float			aa;
	float			bb;
	//for mlx_get_data_adr
	char			*get_data_addr;
	int				bits_per_pixel;
	int				size_line;
	int				endian;
	int				color_blue;
	int				color_green;
	int				color_red;
	int				fractal;
	int				max_iteration;
	int				mouse_switch;
	void			*image;
	void			*mlx_init;
	void			*window;
}						t_map;

int					main(int argc, char **argv);
void				set_burningship(t_map *map);
void				set_douady(t_map *map);
void				set_julia(t_map *map);
void				set_mandelbrot(t_map *map);
void				draw(t_map *map);
void				event(t_map *map);
void				init_map(t_map *map);
void				display_text(t_map *map);
int					mouse_hook(int button, int x, int y, t_map *map);
int					mouse_julia(int x, int y, t_map *map);
int					switch_color(int keycode, t_map *map);
int					swich_fractal(int keycode, t_map *map);
int					handle_key(int keycode, t_map *map);
void				put_pixel(t_map *map, int x, int y);
void				put_pixel_2(t_map *map, int x, int y);


#endif
