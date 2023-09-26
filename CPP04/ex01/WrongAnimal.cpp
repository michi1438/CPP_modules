/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:01:33 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 11:42:05 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//coplien cdc

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Random WrongAnimal constructor" << std::endl;
	type = "random_WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Random WrongAnimal destructor" << std::endl;
}

//Member Functions
std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const {}
