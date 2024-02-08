# Makefile - ex00 - cpp07

NAME = Array.out

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g3 -fsanitize=undefined

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
