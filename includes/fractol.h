
#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <math.h>
# include "../libft/libft.h"
# include <stdio.h>

# define WIDTH 900
# define HEIGHT 900

typedef struct		s_map
{
	double			zoom;
	double			xy;
	void			*window;
	void			*image;
	int				fractal;
	double			x;
	double			y;
	char			*data;
	int				color_red;
	int				color_green;
	int				color_blue;
	int				max_iteration;
	void			*mlx_init;
	//for mlx_get_data_adr
	char			*get_data_addr;
	int				bits_per_pixel;
	int				size_line;
	int				endian;
	//
	double			x1;
	double			y1;
	double			x2;
	double			y2;
	double			img_x;
	double			img_y;
	double			jul_x;
	double			jul_y;
	double			curr_iteration;
	double			cre;
	double			cim;
	double			zx;
	double			zy;
	int				mouse_switch;
	
}					t_map;

void				set_julia(t_map *map);
void				set_mandelbrot(t_map *map);
void				mlx(t_map *map);
void				display_text(t_map *map);
void				init_map(t_map *map);
void				draw(t_map *map);
void				event(t_map *map);
int					mouse_move(t_map *map, int keycode, int x, int y);
int					handle_key(t_map *map, int key_code);
int					switch_color(t_map *map, int keycode);
int					switch_fractal(t_map *map, int keycode);
int					mouse_julia(t_map *map, int x, int y);

#endif
