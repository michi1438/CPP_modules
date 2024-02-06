# Makefile - ex00 - cpp05

NAME = coffee_makers.out

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98# -g3 -fsanitize=address # makes it segfault with no details on the occuring error...

SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *_Shrubbery

.PHONY: re fclean clean
