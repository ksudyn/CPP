# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 17:38:32 by ksudyn            #+#    #+#              #
#    Updated: 2025/09/11 19:17:05 by ksudyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde
CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp zombieHorde.cpp Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
