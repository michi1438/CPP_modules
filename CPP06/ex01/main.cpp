/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:56:45 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/05 22:52:08 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main(void)
{
	Data* d = new Data(11);

	std::cout << "Value of member val in d before Serialization = " << d->Val << std::endl;
	std::cout << "before serialization : " << d << std::endl;
	uintptr_t uint = Serializer::serialize(d);
	std::cout << "uint val = " << uint << ", in hex this is : " << std::hex << uint << std::endl;
	std::cout << "after deserialization : " << Serializer::deserialize(uint) << std::endl;
	Data* b = Serializer::deserialize(uint);
	std::cout << "Value of member val in b after deserialization = " << std::dec << b->Val << std::endl;
	delete b;

	return 0;
}
