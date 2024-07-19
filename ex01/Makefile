# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 11:53:34 by jpaul-kr          #+#    #+#              #
#    Updated: 2024/07/19 12:21:15 by jpaul-kr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap
CC = c++ -std=c++98
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
RM = rm -rf

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
