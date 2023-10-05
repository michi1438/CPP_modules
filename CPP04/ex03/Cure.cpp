/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:43:24 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 17:28:23 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// cdc Coplien

Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(const Cure& other)
{
	*this = other;
}

Cure::~Cure(void)
{
	//std::cout << "Cure destroyer called" << std::endl;
}

// operator

Cure&	Cure::operator= (const Cure& other)
{
	this->type = other.type;	

	return (*this);
}

// Member Func

AMateria*	Cure::clone(void) const
{
	Cure* new_cure = new Cure();
	return (new_cure);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
