/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:12:37 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/30 10:27:40 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

// cdc Coplien

RobotomyRequestForm::RobotomyRequestForm(void)
{
	this->setFName("Undefined RobotomyRequestForm");
	this->setSGrade(72);
	this->setEGrade(45);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	std::string fname = target;

	this->setTarget(target);
	this->setFName(fname.append("'s RobotomyRequestForm"));
	this->setSGrade(72);
	this->setEGrade(45);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

// member func

void RobotomyRequestForm::action(void) const
{
	int randn;

	std::srand(std::time(NULL));	
	randn = std::rand();
	
	if (randn % 2 == 0)
		std::cout << this->getTarget() << ", has been Robotomized." << std::endl;
	else
		std::cout << "Robotomy failed !!! " << this->getTarget() << ", has not been Robotomized." << std::endl;
}
