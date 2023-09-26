# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 17:28:58 by mguerga           #+#    #+#              #
#    Updated: 2023/09/26 17:46:17 by mguerga          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface.out

CXX = g++

CXXFLAGS = -Werror -Wextra -Wall -std=c++98 -g3

SRCS = main.cpp #AMateria.cpp Character.cpp

OBJS = $(SRCS:cpp=0)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

.PHONY: re fclean clean
