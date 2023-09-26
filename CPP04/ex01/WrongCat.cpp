/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:30:16 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 11:38:21 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Coplien cdc
WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
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

