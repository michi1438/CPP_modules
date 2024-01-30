/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:39:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/30 10:41:53 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("John", 2);
		Bureaucrat d("Enrique", 150);
		std::cout << b << d;
		std::cout << std::endl;
		std::cout << "------------------------------This should work------------------" << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("John", 2);
		PresidentialPardonForm ppf;
		PresidentialPardonForm ppf2("John");
		PresidentialPardonForm ppf3(ppf2);
		b.signForm(ppf2);
		std::cout << b << ppf << ppf2 << ppf3 << std::endl;
		b.executeForm(ppf2);
		std::cout << "------------------------------This should print------------------" << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Francis", 2);
		RobotomyRequestForm ppf3("Frankenstein");
		b.signForm(ppf3);
		std::cout << b << ppf3 << std::endl;
		b.executeForm(ppf3);
		std::cout << "------------------------------This should print------------------" << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Frank", 2);
		ShrubberyCreationForm ppf3("Sequoia");
		b.signForm(ppf3);
		std::cout << b << ppf3 << std::endl;
		b.executeForm(ppf3);
		std::cout << "------------------------------This should print------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
