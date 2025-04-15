#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 11:51:34 by lleodev           #+#    #+#              #
#    Updated: 2025/03/24 09:33:30 by lleodev          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_isalpha.c	\
	ft_isdigit.c 		\
	ft_isalnum.c 		\
	ft_isascii.c 		\
	ft_isprint.c 		\
	ft_strlen.c 		\
	ft_memset.c 		\
	ft_bzero.c			\
	ft_memcpy.c 		\
	ft_memmove.c 		\
	ft_strlcpy.c 		\
	ft_strlcat.c 		\
	ft_toupper.c 		\
	ft_tolower.c 		\
	ft_strchr.c 		\
	ft_strrchr.c 		\
	ft_strncmp.c 		\
	ft_memchr.c 		\
	ft_memcmp.c 		\
	ft_strnstr.c 		\
	ft_atoi.c 			\
	ft_calloc.c 		\
	ft_strdup.c 		\
	ft_substr.c 		\
	ft_strjoin.c 		\
	ft_strtrim.c 		\
	ft_split.c 		\
	ft_itoa.c 		\
	ft_strmapi.c 		\
	ft_striteri.c 		\
	ft_putchar_fd.c 	\
	ft_putstr_fd.c 		\
	ft_putendl_fd.c 	\
	ft_epur.c			\
	get_next_line.c		\
	get_next_line_utils.c	\
	ft_putnbr_fd.c		\
	ft_findchar.c


################################COLORS######################################

WHITE_TEXT = \033[1;37m
GREEN_TEXT = \033[0;32m
RED_TEXT = \033[0;31m
ORANGE_TEXT = \033[0;33m
BLUE_TEXT = \033[0;34m
GREEN_BG = \033[42m
RED_BG = \033[41m
ORANGE_BG = \033[43m
BLUE_BG = \033[44m
RESET = \033[0m

OBJ = $(SRCS:.c=.o)

all: $(NAME)
	@echo "$(GREEN_BG) Libft ready! $(RESET)"
	make lleodev_header
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	make lleodev_header
	@echo "$(BLUE_BG)compiling Libft... $(RESET)"

$(NAME): $(OBJ) 
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo "$(ORANGE_BG)Cleaning $()Libft sourses $(RESET)"
	@/bin/rm -f $(OBJ)
	make lleodev_header
	@echo "$(RED_BG) $()Libft cleaned $(RESET)"

fclean: clean
	make lleodev_header
	@echo "$(RED_BG) $()Libft cleaned $(RESET)"
	@/bin/rm -f $(NAME)

re: fclean all

lleodev_header:
	@clear
	@echo "$(RED_TEXT)>_ In search of incrible!$(RESET)🎓"
	@echo "$(GREEN_BG)$(WHITE_TEXT)>_Wellcome$(RESET)👋"
	@echo "$(GREEN_TEXT)"
	@echo "\033[32m   ██████╗  ██    ██╗ ██████╗  ██████╗  ██████╗  \033[0m"
	@echo "\033[32m  ██╔════╝  ██    ██║ ██   ██╗      ██╗ ██   ██╗ \033[0m"
	@echo "\033[32m  ██║       ██    ██║ ██████╔╝  █████╔╝ ██    ██╗	\033[0m"
	@echo "\033[32m  ██║       ██    ██║ ██   ██╗      ██╗ ██   ██╔╝	\033[0m"
	@echo "\033[32m  ╚██████╗  ████████║ ██████╔╝ ██████╔╝ ██████╔╝    \033[0m"
	@echo "\033[32m   ╚═════╝  ╚═══════╝ ╚═════╝  ╚═════╝  ╚═════╝      \033[0m$(RESET)"
	@echo "$(BLUE_TEXT)Makefile created by ctati && lleodev $(RESET)"
	@echo "$(BLUE_TEXT)" && date
	@echo "$(RESET)"

.PHONY: all bonus clean fclean re
