/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:01:33 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:37:21 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//coplien cdc

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Random WrongAnimal constructor" << std::endl;
	type = "random_WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Random WrongAnimal destructor" << std::endl;
}
	
// operator

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other)
{
	std::cout << "WrongAnimal assignement operator called" << std::endl;

	this->type = other.type;
	return (*this);
}

//Member Functions

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound : HIIIIHANNNN" << std::endl;
}
