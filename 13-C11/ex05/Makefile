# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 12:03:26 by mlazzare          #+#    #+#              #
#    Updated: 2020/10/28 20:13:58 by mlazzare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./$(wildcard *.c)

OBJS = $(SRCS:.c=.o)

NAME = do-op

HEADER = -Ift.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror $(HEADER) -o $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean

.PHONY: clean fclean all re
