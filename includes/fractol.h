
#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <math.h>
# include "../libft/libft.h"

# define WIDTH 900
# define HEIGHT 900

typedef struct		s_map
{
	void			*mlx_init;
	void			*window;
	void			*image;
	int				fractal;
	//real and imaginary part of the constant c, determinate shape of the Julia Set
	double			cRe;
	double			cIm;
	//real and imaginary parts of new and old
	double			newRe;
	double			newIm;
	double			oldRe;
	double			oldIm;
	//you can change these to zoom and change position
	double			zoom; // = 1;
	double			moveX; // = 0;
	double			moveY; // = 0;
	int				color_red;
	int				color_green;
	int				color_blue;
	int				max_iteration;
	//mlx_get_data_adr
	char			*get_data_addr;
	int				bits_per_pixel;
	int				size_line;
	int				endian;
	unsigned long	color;
}					t_map;

void				set_mandelbrot(t_map *map);
void				set_julia(t_map *map);
void				mlx(t_map *map);
int					handle_key(int key_code, t_map *map);

#endif
