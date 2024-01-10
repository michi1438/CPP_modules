/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:13:07 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/10 19:55:02 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// cdco Coplien

Form::Form(void) : FName("Unspcified Form")
{
	SGrade = 150;
	EGrade = 150;
}


Form::Form(std::string name, int sgrade int egrade) : FName(name)
{
	SGrade = sgrade;
	EGrade = egrade;
	try
	{
		if (SGrade < 1)
			throw (Form::GradeToHighException(1));
		else if (SGrade > 150)
			throw (Form::GradeToLowException(1));
		else if (EGrade < 1)
			throw (Form::GradeToHighException(0));
		else if (EGrade > 150)
			throw (Form::GradeToLowException(0));
	}
	catch (GradeToHighException High(int Tgrade))
	{
		if (Tgrade == 1)
		{
			std::cout << "The given SGrade for " << FName << " is too High\n";
			SGrade = 1;
		}
		else
		{
			std::cout << "The given EGrade for " << FName << " is too High\n";
			EGrade = 1;
		}
	}	
	catch (GradeToLowException Low)
	{
		if (Tgrade == 1)
		{
			std::cout << "The given SGrade for " << FName << " is too Low\n";
			SGrade = 150;
		}
		else	
		{
			std::cout << "The given EGrade for " << FName << " is too Low\n";
			EGrade = 150;
		}
	}
}

Form::~Form(void)
{
}

Form::Form(const Form& other)
{
	*this = other;
}

Form&	Form::operator= (const Form& other)
{
	// make getters
	this->FName = other.FName;
	this->Signed = other.Signed;
	this->SGrade = other.SGrade;
	this->EGrade = other.EGrade;
	return (*this);
	
}

// Member func


