/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:01:33 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 10:24:47 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//coplien cdc

Animal::Animal(void)
{
	std::cout << "Random animal constructor" << std::endl;
	type = "random_animal";
}

Animal::~Animal(void)
{
	std::cout << "Random animal destructor" << std::endl;
}

//Member Functions
std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const {}
