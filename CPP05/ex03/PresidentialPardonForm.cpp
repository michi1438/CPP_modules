/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:10:54 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 12:57:04 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// cdc Coplien

PresidentialPardonForm::PresidentialPardonForm(void)
{
	this->setFName("Undefined PresidentialPardonForm");
	this->setSGrade(25);
	this->setEGrade(5);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	std::string fname = target;

	this->setTarget(target);
	this->setFName(fname.append("'s PresidentialPardonForm"));
	this->setSGrade(25);
	this->setEGrade(5);
}

PresidentialPardonForm::PresidentialPardonForm(std::string form_name, std::string target)
{
	this->setTarget(target);
	this->setFName(form_name);
	this->setSGrade(25);
	this->setEGrade(5);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

//member func

void PresidentialPardonForm::action(void) const
{
	std::cout << this->getTarget() << ", has been pardoned by Zaphod Beeblebrox" << std::endl;
}
