# Makefile - ex00 - cpp05

NAME = MAGGOTS.out

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

SRCS = main.cpp Bureaucrat.cpp Form.cpp

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
