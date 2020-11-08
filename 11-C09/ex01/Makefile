# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/24 21:49:35 by mlazzare          #+#    #+#              #
#    Updated: 2020/10/26 14:26:46 by mlazzare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/

INCLUDES = includes

FILES = ${SRCS}ft_putchar.c ${SRCS}ft_swap.c ${SRCS}ft_putstr.c \
		${SRCS}ft_strlen.c ${SRCS}ft_strcmp.c

HEADER = -I${INCLUDES}

OBJS = ${FILES:.c=.o}

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${HEADER}

${NAME}: ${OBJS}
	ar cr ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: clean fclean re all
