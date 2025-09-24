# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/23 19:51:42 by ksudyn            #+#    #+#              #
#    Updated: 2025/09/24 20:32:46 by ksudyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals_1

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES = main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJECTS = $(SOURCES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re