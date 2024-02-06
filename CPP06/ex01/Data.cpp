/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:53:17 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/05 22:47:14 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int val) : Val(val)
{
	std::cout << "constructor for Data" << std::endl;
}

Data::~Data(void) {}

Data::Data(const Data& o)
{
	*this = o; 
}

Data& Data::operator= (const Data& o)
{
	this->Val = o.Val;
	return (*this);
}
