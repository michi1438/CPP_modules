/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:30:16 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:39:34 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Coplien cdc

Cat::Cat(void)
{
	std::cout << "Cat Constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}
	
// operator

Cat& Cat::operator= (const Cat& other)
{
	std::cout << "Cat assignement operator called" << std::endl;

	this->type = other.type;
	return (*this);
}

//Member Functions

std::string Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound(void) const
{
	std::cout << "miaou miaou !!" << std::endl;
}
