/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:19:20 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 17:46:41 by mguerga          ###   ########.fr       */
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

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

// Member functions

