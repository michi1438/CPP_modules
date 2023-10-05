/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:19:20 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 10:16:19 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//coplien cdc

Brain::Brain(void)
{
	std::cout << "Brain constructor called " << this << std::endl;
}

Brain::Brain(bool)
{
	std::cout << "Brain constructor called w/ param" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other; 
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

// operators

Brain&	Brain::operator= (const Brain& other)
{
	int i(0);
	
	std::cout << "Brain assignement operator called" << std::endl;
	while(i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
	return (*this);
}

// Member functions

