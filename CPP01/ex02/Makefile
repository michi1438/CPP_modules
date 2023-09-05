# MAKEFILE

NAME = brain

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g3

SRC = main.cpp 

OBJS = $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
