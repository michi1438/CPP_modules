# Makefile - ex00 - cpp03

NAME = ClapTrap

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g3

SRCS = main.cpp ClapTrap.cpp

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
