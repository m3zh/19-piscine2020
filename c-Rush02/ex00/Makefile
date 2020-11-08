# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/25 16:29:12 by mlazzare          #+#    #+#              #
#    Updated: 2020/10/25 21:13:59 by canjugun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = check_error.c \
	  create_dict.c \
	  error_dict.c \
	  free_dict.c \
	  get_next_line.c \
	  main.c \
	  str_utilities.c \
	  str_utilities2.c \
	  strstr.c \
	  trim_dict.c \
	  prefixe1.c \
	  prefixe2.c \
	  prefixefinal.c \
	  printnumber.c \

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Werror -Wextra -Wall -I include -o rush-02

NAME = rush-02

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: re clean fclean all
