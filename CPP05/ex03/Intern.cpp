/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:39:54 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/30 13:30:27 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// cdco

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::(const &Intern o)
{
	*o = this;
}

Intern& Intern::operator= (const Intern& other)
{
	return this;
}

// member func

AForm& MakeForm(std::string form_name, std::string target_name)
{
	std::string tab[3];

	tab[0] = "robotomyr";
	tab[1] = "president";
	tab[2] = "shrubbery";


	
