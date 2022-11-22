# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 19:58:44 by fdagbert          #+#    #+#              #
#    Updated: 2017/11/09 20:02:34 by fdagbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
HEADER = ./includes/
FUNCTIONS = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c \
	   	$(SRC)ft_strlen.c $(SRC)ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): object
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

object:
	gcc $(FLAGS) -I$(HEADER) -c $(FUNCTIONS)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
