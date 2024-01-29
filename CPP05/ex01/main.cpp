/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:39:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/24 10:34:15 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form f;
		Form ff("taxe reduction", 5, 2);
		std::cout << ff << std::endl << f << std::endl;
		Bureaucrat b("John", 2);
		Bureaucrat d("Enrique", 150);
		std::cout << b << d;
		std::cout << std::endl;
		b.signForm(ff);
		d.signForm(f);
		std::cout << std::endl;
		std::cout << ff << std::endl << f << std::endl;
		std::cout << "------------------------------This should work------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form f("blabla", -1, 1);
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
		Form f("blabla", 1, 1);
		Bureaucrat d("Enrique", 3);
		d.signForm(f);
		std::cout << "------------------------------This should work exception was caught in signform------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}