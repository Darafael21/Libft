# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 14:41:18 by darafael          #+#    #+#              #
#    Updated: 2025/04/16 19:07:27 by darafael         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_strchr.c ft_strncmp.c ft_strdup.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_atoi.c ft_bzero.c ft_calloc.c ft_substr.c ft_split.c \
ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_tolower.c ft_toupper.c ft_itoa.c 

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
