# MAKEFILE
NAME = megaphone

CXX = g++

CPPFLAGS = -Werror -Wall -Wextra -std=c++98 -fsanitize=undefined

AR = ar rcs

SRC = megaphone.cpp

OBJS = $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME) 
#	$(AR) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
