# Makefile - HARL2

NAME = Harl

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g3

SRCS = main.cpp

OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	ar rcs

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
