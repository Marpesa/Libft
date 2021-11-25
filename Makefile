# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmery <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:17:55 by lmery             #+#    #+#              #
#    Updated: 2021/11/22 13:21:30 by lmery            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = srcs/ft_putchar.c\
	   srcs/ft_swap.c\
	   srcs/ft_putstr.c\
	   srcs/ft_strlen.c\
	   srcs/ft_strcmp.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c includes/ft.h
	$(CC) $(CFLAGS) -o $@ -c $< -I includes/

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
