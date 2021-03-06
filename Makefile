# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olbondar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/08 16:08:34 by olbondar          #+#    #+#              #
#    Updated: 2018/07/08 16:08:37 by olbondar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fractol
SRC := main.c \
		set_burningship.c \
		set_douady.c \
		set_julia.c \
		set_mandelbrot.c \
		draw.c \
		event.c \
		init_map.c \
		display_text.c \
		mouse_hook.c \
		mouse_julia.c \
		switch_color.c \
		switch_fractal.c \
		handle_key.c \
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
	@echo "\033[32mFract'ol is ready.\033[0m"

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $< -I $(HEADLIB) -I $(HEADMLX) -I includes

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C libft

re: @fclean all
