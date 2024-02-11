/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:49:28 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/11 12:24:24 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(6);
	v.push_back(7);
	v.push_back(9);
	v.push_back(11);
	
	try
	{
		std::cout << easyfind(v, 11) << " was found in this container.." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<float> l;

	l.push_back(1.1f);
	l.push_front(1.0f);
	l.push_back(1.4f);
	l.push_front(11.4f);
	try
	{
		std::cout << easyfind(l, 1) << " was found in this container.." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
