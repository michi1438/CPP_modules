# Makefile - ex00 - cpp05

NAME = 28B_not_28C.out

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

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
