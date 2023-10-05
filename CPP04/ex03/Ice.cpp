/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:35:52 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 17:28:09 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// cdc Coplien

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(const Ice& other)
{
	*this = other;
}

Ice::~Ice(void)
{
//	std::cout << "Ice destroyer called" << std::endl;
}

// operator

Ice&	Ice::operator= (const Ice& other)
{
	this->type = other.type;	

	return (*this);
}

// Member Func

AMateria*	Ice::clone(void) const
{
	Ice* new_ice = new Ice();
	return (new_ice);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
