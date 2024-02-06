# Makefile - ex00 - cpp05

NAME = serialize.out

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g3# -fsanitize=address # makes it segfault with no details on the occuring error...

SRCS = main.cpp Serializer.cpp Data.cpp

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
