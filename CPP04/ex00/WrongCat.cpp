/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:30:16 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:38:11 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Coplien cdc

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

// operator

WrongCat& WrongCat::operator= (const WrongCat& other)
{
	std::cout << "WrongCat assignement operator called" << std::endl;

	this->type = other.type;
	return (*this);
}

//Member Functions

std::string WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Maouuuh hrum hrum miaou !!" << std::endl;
}

