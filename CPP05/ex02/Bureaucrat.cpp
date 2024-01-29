/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:58:33 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/29 18:29:58 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// cdco_Coplien

Bureaucrat::Bureaucrat(void) : _Name("Anonymus Lexus")
{
	_Grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : 
	_Name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeToHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeToLowException());
	this->_Grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _Name(other.getName())
{
	*this = other;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& other)
{
	this->_Grade = other.getGrade();
	return (*this);
}

//getters

std::string		Bureaucrat::getName(void) const
{
	return (_Name);
}

int				Bureaucrat::getGrade(void) const
{
	return (_Grade);
}

// Member func

void			Bureaucrat::increment(void)
{
	this->_Grade--;
	if (_Grade < 1)
		throw (GradeToHighException());
}

void			Bureaucrat::decrement(void)
{
	this->_Grade++;
	if (_Grade > 150)
		throw (GradeToLowException());
}

void			Bureaucrat::executeForm(AForm const &f) const
{
	try
	{
		int exec = f.execute(*this);

		if (exec == 0)
			std::cout << this->getName() << " executed " << f.getFName() << std::endl; 
		else if (exec == 1)
			std::cout << this->getName() << " could not execute " << f.getFName() << ", it was not signed !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " could not execute because " << e.what() << std::endl;
		return ;
	}
}	

void			Bureaucrat::signForm(AForm &f) const
{
	try
	{
		f.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getFName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << f.getFName() << std::endl;
}

// Other

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& B)
{
	os << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
	return (os);
}
