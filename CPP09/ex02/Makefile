# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 15:34:02 by mguerga           #+#    #+#              #
#    Updated: 2024/02/27 13:50:51 by mguerga          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe 

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98# -g3 -fsanitize=address

SRCS = main.cpp PmergeMe.cpp

OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: re fclean clean
	
