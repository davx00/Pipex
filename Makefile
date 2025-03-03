# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: despanol <despanol@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 16:53:12 by despanol          #+#    #+#              #
#    Updated: 2025/02/26 16:53:29 by despanol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=pipex
CC=cc
LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a
CFLAGS = -Wall -Wextra -Werror -g3 -I$(LIBFT_DIR)

SRC=	./main/pipex.c \
        ./main/utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT_LIB)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re