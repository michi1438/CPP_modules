/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:30:16 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 11:39:47 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Coplien cdc
Cat::Cat(void)
{
	std::cout << "Cat Constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
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

