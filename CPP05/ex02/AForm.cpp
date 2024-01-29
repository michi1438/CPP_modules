/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:13:07 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/29 18:43:13 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// cdco Coplien

AForm::AForm(void)
{
	this->setSigned(false);
	this->setTarget("undefined_target");
}

AForm::~AForm(void) {}

AForm::AForm(const AForm& o)
{
	*this = o;
}

AForm&	AForm::operator= (const AForm& o) 
{
	this->setFName(o.getFName());
	this->setSGrade(o.getSGrade());
	this->setEGrade(o.getEGrade());
	this->setSigned(o.getSigned());
	this->setTarget(o.getTarget());
	return (*this);
}

// Member func

void	AForm::beSigned(Bureaucrat b)
{
	int Sgrd;

	Sgrd = this->getSGrade();
	if (Sgrd > 0 && Sgrd <= 150 && b.getGrade() <= Sgrd)
		this->Signed = true;
	else 
		throw (AForm::GradeToLowException());
}

int	AForm::execute(const Bureaucrat &b) const
{
	int Egrd;

	Egrd = this->getEGrade();
	if (this->getSigned() == false)
		return 1;
	if (Egrd > 0 && Egrd <= 150 && b.getGrade() <= Egrd)
		this->action();
	else 
		throw (AForm::GradeToLowException());
	return 0;
}

//getters and setters

std::string	AForm::getFName(void) const
{
	return (this->FName);
}

int	AForm::getSGrade(void) const
{
	return (this->SGrade);
}

int AForm::getEGrade(void) const
{
	return (this->EGrade);
}

bool AForm::getSigned(void) const
{
	return (this->Signed);
}

std::string AForm::getTarget (void) const
{
	return (this->Target);
}

void	AForm::setFName(std::string str)
{
	this->FName = str;
}

void	AForm::setSGrade(int grd)
{
	this->SGrade = grd;
}

void	AForm::setEGrade(int grd)
{
	this->EGrade = grd;
}

void	AForm::setSigned(bool t)
{
	this->Signed = t;
}

void	AForm::setTarget(std::string str)
{
	this->Target = str;
}

// Other

std::ostream&	operator<<(std::ostream& os, const AForm& B)
{
	if (B.getSigned() == true)
		os << B.getFName() << " is a SIGNED Form :" << std::endl;
	else
		os << B.getFName() << " is an UNSIGNED Form :" << std::endl;
	os << "Signing grade : " << B.getSGrade() << std::endl;
	os << "Execution grade : " << B.getEGrade() << std::endl;
	return (os);
}
