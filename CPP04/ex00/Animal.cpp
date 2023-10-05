/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:01:33 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:38:16 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//coplien cdc

Animal::Animal(void)
{
	std::cout << "Random animal constructor" << std::endl;
	type = "random_animal";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal(void)
{
	std::cout << "Random animal destructor" << std::endl;
}

// operator

Animal& Animal::operator= (const Animal& other)
{
	std::cout << "Animal assignement operator called" << std::endl;

	this->type = other.type;
	return (*this);
}

//Member Functions

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const {}
