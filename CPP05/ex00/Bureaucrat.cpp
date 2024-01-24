/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:58:33 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/24 10:38:03 by mguerga          ###   ########.fr       */
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


// Member func

std::string		Bureaucrat::getName(void) const
{
	return (_Name);
}

int				Bureaucrat::getGrade(void) const
{
	return (_Grade);
}

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

// Other

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& B)
{
	os << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
	return (os);
}
