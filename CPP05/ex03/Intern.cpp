/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:39:54 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 13:36:26 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
// cdco

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern& Intern::operator= (const Intern& other)
{
	(void)other;
	return *this;
}

// member func

AForm * Intern::MakeForm(std::string form_name, std::string target_name)
{
	std::string tab[6];
	AForm *t_form;
	int i = 0;

	tab[0] = "robot";
	tab[1] = "presi";
	tab[2] = "shrub";
	tab[3] = "Robot";
	tab[4] = "Presi";
	tab[5] = "Shrub";
	
	while (i < 6)
	{
		if (form_name.find(tab[i], 0) != std::string::npos)
			break ;
		i++;
	}
	switch (i % 3) {
		case 0:
			t_form = new RobotomyRequestForm(form_name, target_name);  
			break ;
		case 1:
			t_form = new PresidentialPardonForm(form_name, target_name);  
			break ;
		case 2:
			t_form = new ShrubberyCreationForm(form_name, target_name);  
			break ;
		default:
			throw (FormNotFoundException());
	}
	std::cout << "Intern creates " << t_form->getFName() << std::endl;
	return (t_form);
}


	
