# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 20:12:51 by fdagbert          #+#    #+#              #
#    Updated: 2017/11/09 20:12:58 by fdagbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ./
HEADER = ./
OBJECTS = ./*.o
FUNCTIONS = $(SRC)*.c 
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): objects
	gcc -o $(NAME) $(OBJECTS)
	
objects: 
	gcc -c $(FLAGS) -I $(HEADER) -c $(FUNCTIONS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
