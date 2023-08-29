# Makefile ex00 Fixed

NAME = Fixed

CXX = g++

CXXFLAGS = -Werror -Wextra -Wall -std=c++98 -g3

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re

