/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:39:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/06 12:56:36 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("John", 2);
		Bureaucrat d("Enrique", 150);
		std::cout << b << d;
		std::cout << std::endl;
		std::cout << "------------------------------This should work------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("John", -2);
		std::cout << "------------------------------This shouldn't print------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("John", 1);
		b.increment();
		std::cout << "------------------------------This shouldn't print------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("John", 150);
		b.decrement();
		std::cout << "------------------------------This shouldn't print------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat d("Enrique", 3);
		d.increment();
		d.increment();
		std::cout << d;
		std::cout << "------------------------------This should work-------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
