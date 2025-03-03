# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 21:04:56 by despanol          #+#    #+#              #
#    Updated: 2024/10/11 11:43:50 by despanol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CCFLAGS = -Wall -Wextra -Werror
RM = rm

MY_SOURCES =					ft_isdigit.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strncmp.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_strnstr.c\
						ft_atoi.c\
						ft_calloc.c\
						ft_strdup.c\
						ft_substr.c\
						ft_strjoin.c\
						ft_strtrim.c\
						ft_putchar_fd.c\
						ft_putstr_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c\
						ft_itoa.c\
						ft_strrchr.c\
						ft_strmapi.c\
						ft_striteri.c\
						ft_split.c\
						ft_printf.c\
						utils.c\


OBJS = $(MY_SOURCES:.c=.o)

INCLUDE = libft.h

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) 

%.o : %.c $(INCLUDE)
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
