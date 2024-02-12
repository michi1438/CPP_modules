# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 15:34:02 by mguerga           #+#    #+#              #
#    Updated: 2024/02/12 15:44:25 by mguerga          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc 

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

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
	
