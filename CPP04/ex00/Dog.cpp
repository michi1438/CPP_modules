/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:15:43 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:21:17 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Coplien cdc

Dog::Dog(void)
{
	std::cout << "Dog Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}
	
// operator

Dog& Dog::operator= (const Dog& other)
{
	std::cout << "Dog assignement operator called" << std::endl;

	this->type = other.type;
	return (*this);
}

//Member Functions

std::string Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Wooff !!" << std::endl;
}
