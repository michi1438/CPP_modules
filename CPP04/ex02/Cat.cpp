/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:30:16 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 11:29:46 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Coplien cdc

Cat::Cat(void)
{
	std::cout << "Cat Constructor called" << std::endl;
	cat_Brain = new Brain();
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
	delete cat_Brain;
}
	
// operator

Cat& Cat::operator= (const Cat& other)
{
	std::cout << "Cat assignement operator called" << std::endl;

	this->type = other.type;
	this->cat_Brain = new Brain(*other.cat_Brain);
	//std::cout << "cat_Brain = " << this->cat_Brain << std::endl;

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
