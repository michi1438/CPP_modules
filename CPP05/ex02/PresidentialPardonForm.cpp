/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:10:54 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/29 13:34:24 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// cdc Coplien

PresidentialPardonForm::PresidentialPardonForm(void)
{
	this->Target = "undefined_target";
	this->setFName("Undefined PresidentialPardonForm");
	this->setSGrade(25);
	this->setEGrade(5);
	this->setSigned(false);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	std::string fname = target;

	this->Target = target;
	this->setFName(fname.append("'s PresidentialPardonForm"));
	this->setSGrade(25);
	this->setEGrade(5);
	this->setSigned(false);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

//member func

void PresidentialPardonForm::action(void) const
{
	std::cout << this->Target << ", has been pardoned by Zaphod Beeblebrox" << std::endl;
}
	

