# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgolda <kgolda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 21:15:13 by kgolda            #+#    #+#              #
#    Updated: 2022/04/28 17:14:39 by kgolda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D
NAME_BONUS = cub3D_bonus

SRCS	= 	./src/cub_main.c \
			./src/cub_init.c \
			./src/cub_key_actions.c \
			./src/cub_key_handler.c \
			./src/cub_map_check_contur.c \
			./src/cub_map_check_rows.c \
			./src/cub_map_checks.c \
			./src/cub_map_import.c \
			./src/cub_map_open.c \
			./src/cub_map_parsing.c \
			./src/cub_utils.c \
			./src/cub_walls_add.c \
			./src/cub_walls_casting.c

SRC_BONUS =	./src_bonus/cub_doors_bonus.c \
			./src_bonus/cub_init_bonus.c \
			./src_bonus/cub_key_actions_bonus.c \
			./src_bonus/cub_key_handler_bonus.c \
			./src_bonus/cub_key_rotate_bonus.c \
			./src_bonus/cub_main_bonus.c \
			./src_bonus/cub_map_check_contur_bonus.c \
			./src_bonus/cub_map_check_rows_bonus.c \
			./src_bonus/cub_map_checks_bonus.c \
			./src_bonus/cub_map_import_bonus.c \
			./src_bonus/cub_map_open_bonus.c \
			./src_bonus/cub_map_parsing_bonus.c \
			./src_bonus/cub_minimap_bonus.c \
			./src_bonus/cub_mouse_bonus.c \
			./src_bonus/cub_utils_bonus.c \
			./src_bonus/cub_walls_add_bonus.c \
			./src_bonus/cub_walls_casting_bonus.c


OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

OBJ_DIR			= src/
OBJ_BONUS_DIR	= src_bonus/

HEADER = ./src/cub3d.h
HEADER_BONUS = ./src_bonus/cub3d_bonus.h

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

# only for MacOS graphics not arm.
MLX_FLAGS = -lmlx -L ./mlx -framework OpenGL -framework AppKit

# FOR LIBS
LIBDIR		= libft

LIBFT_LIB	= $(LIBDIR)/libft.a

LIB			= -L$(LIBDIR) -lft

GNL			= get_next_line/get_next_line.a

MLX_DIR		= mlx


all: $(NAME)

$(NAME): $(OBJ)
			make -C $(LIBDIR)
			make -C get_next_line
			make -C $(MLX_DIR)
			$(CC) $(CFLAGS) $(LIBFT_LIB) $(GNL) $(OBJ) $(MLX_FLAGS) -o $(NAME)

$(OBJ_DIR)%.o:	$(OBJ_DIR)%.c $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@


bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS)
			make -C $(LIBDIR)
			make -C get_next_line
			make -C $(MLX_DIR)
			$(CC) $(CFLAGS) $(LIBFT_LIB) $(GNL) $(OBJ_BONUS) $(MLX_FLAGS) -o $(NAME_BONUS)

$(OBJ_BONUS_DIR)%.o:	$(OBJ_BONUS_DIR)%.c $(HEADER_BONUS)
						$(CC) $(CFLAGS) -c $< -o $@

clean:
		make clean -C $(LIBDIR)
		make clean -C get_next_line
		make clean -C $(MLX_DIR)
		$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	make fclean -C libft
	make fclean -C get_next_line
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus

# ./cub3D_bonus ./maps/map_bonus.cub
# ./cub3D ./maps/map_ok.cub
