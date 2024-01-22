/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:13:07 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/22 18:41:43 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// cdco Coplien

Form::Form(void) : FName("Unspcified Form"), SGrade(150), EGrade(150)
{
	Signed = false;
}


Form::Form(std::string name, int sgrade, int egrade) : FName(name), SGrade(sgrade), EGrade(egrade)
{
	try
	{
		if (SGrade < 1)
			throw (Form::GradeToHighException());
		else if (SGrade > 150)
			throw (Form::GradeToLowException());
		else if (EGrade < 1)
			throw (Form::GradeToHighException());
		else if (EGrade > 150)
			throw (Form::GradeToLowException());
	}
	catch (GradeToHighException High())
	{
		std::cout << "The given Grade for " << FName << " is too High\n";
	}	
	catch (GradeToLowException Low)
	{
		std::cout << "The given sGrade for " << FName << " is too Low\n";
	}
}

Form::~Form(void)
{
}

Form::Form(const Form& o) : FName(o.getFName()), SGrade(o.getSGrade()), EGrade(o.getEGrade())  
{
	*this = o;
}

Form&	Form::operator= (const Form& o) 
{
	this->Signed = o.Signed;
	return (*this);
}

// Member func
std::string	Form::getFName(void) const
{
	return (this->FName);
}

int	Form::getSGrade(void) const
{
	return (this->SGrade);
}

int Form::getEGrade(void) const
{
	return (this->EGrade);
}

bool Form::getSigned(void) const
{
	return (this->Signed);
}
// Other
std::ostream&	operator<<(std::ostream& os, const Form& B)
{
	if (B.getSigned() == true)
		os << B.getFName() << " is a SIGNED Form :" << std::endl;
	else
		os << B.getFName() << " is an UNSIGNED Form :" << std::endl;
	os << "Signing grade : " << B.getSGrade() << std::endl;
	os << "Execution grade : " << B.getEGrade() << std::endl;
	return (os);
}
