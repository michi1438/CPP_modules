#MAKEFILE
NAME = phonebook

CXX = g++

CPPFLAGS = -Werror -Wall -Wextra -g3 -std=c++98 -fsanitize=undefined

SRC = PhoneBook.cpp main.cpp

OBJS = $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
