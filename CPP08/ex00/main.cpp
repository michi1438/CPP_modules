/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:49:28 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/11 14:02:54 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::cout << "Test with a vector container" << std::endl;
	std::vector<int> v;
	//std::cout << "capacity = " << v.capacity() << std::endl;
	v.push_back(6);
	v.push_back(7);
	v.push_back(9);
	v.push_back(11);
	//std::cout << "capacity = " << v.capacity() << std::endl;
	
	try
	{
		std::cout << easyfind(v, 11) << " was found in this container.." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "END Test with a vector container" << std::endl;

	std::cout << "Test with a list container" << std::endl;
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

	std::cout << "END Test with a list container" << std::endl;

	std::cout << "Test with a std::string container" << std::endl;
	std::string str;

	str.push_back('a');
	str.push_back('l');
	str.push_back('l');
	str.push_back('o');
	try
	{
		std::cout << static_cast<char>(easyfind(str, 'l')) << " was found in this container.." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "END Test with a std::string container" << std::endl;
	return 0;
}
