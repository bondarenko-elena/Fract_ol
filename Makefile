
NAME := fractol
SRC := main.c \
		mlx.c \
		set_julia.c \
		set_mandelbrot.c \
		display_text.c \
		init_map.c \
		draw.c \
		event.c \
		mouse_move.c \
		handle_key.c \
		switch_color.c \
		switch_fractal.c \
		mouse_julia.c \
		put_pixel.c \
		put_pixel_2.c \

SRC:= $(addprefix src/,$(SRC))
OBJ := $(SRC:.c=.o)
HEADLIB := libft/
HEADMLX := /usr/local/include
CFLAGS := -Wall -Wextra -Werror
LIBMLX := /usr/local/lib
FRAMEWS := -lmlx -framework OpenGL -framework AppKit

all: create_lib $(NAME)

create_lib:
	@make -C libft

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) libft/libft.a -L $(LIBMLX) $(FRAMEWS)

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $< -I $(HEADLIB) -I $(HEADMLX) -I includes

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	make fclean -C libft

re: fclean all
