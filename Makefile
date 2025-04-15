#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 11:50:26 by lleodev           #+#    #+#              #
#    Updated: 2025/04/15 10:49:54 by lleodev          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME= rc
CC = cc
MLXFLAGS = -lXext -lX11 -lm
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -I./libs/minilibx -I./libs/libft -I./includes
SRC = src/main.c src/raycasting.c src/win.c src/read.c src/map.c src/utils.c src/render.c src/player.c src/move.c

TEXTURE=true
FOV=PI/3
CONTROLES=keyboard
MAP=assets/map_small.ber
NUM_RAYS=320
TILE_SIZE=50

LIB = libs/minilibx/libmlx.a libs/libft/libft.a

COMPLIB = make -C libs/minilibx/ && make -C libs/libft/

OBJ = $(SRC:src/%.c=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) $(MLXFLAGS) -o $(NAME)

obj/%.o: src/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -DFOV=$(FOV) -DTEXTURE=$(TEXTURE) -DCONTROLES="\"$(CONTROLES)\"" -DMAP="\"$(MAP)\"" -DNUM_RAYS=$(NUM_RAYS) -DTILE_SIZE=$(TILE_SIZE) -c $< -o $@

$(LIB):
	$(COMPLIB)

clean:
	rm -rf ./obj
	make clean -C libs/minilibx/
	make clean -C libs/libft/

fclean: clean
	rm -rf $(NAME)
	make fclean -C libs/libft

re: fclean all