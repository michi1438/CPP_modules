# Makefile - ex00 - cpp04

NAME = POLY.out

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g3# -fsanitize=address

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

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
