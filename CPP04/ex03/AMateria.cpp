/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:37:30 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 18:31:52 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(const AMateria& other) 
{
	*this = other;
}

AMateria::~AMateria(void) {}

//operator

AMateria&	AMateria::operator= (const AMateria& other)
{
	this->type = other.type;
	return (*this);
}

//Member functions

void	AMateria::use(ICharacter& target) 
{
	(void)target;
}

const std::string& AMateria::getType(void) const
{
	return (this->type);
}

