/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:39:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 11:10:30 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "------------------------------TEST0------------------" << std::endl;
	try
	{
		Bureaucrat b("John", 2);
		Bureaucrat d("Enrique", 150);
		std::cout << b << d;
		std::cout << std::endl;
	}
	// notice the ampersand & after the type, therefore this catches also classes derived from exception...
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------END_OF_TEST0------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "------------------------------TEST1------------------" << std::endl;
	try
	{
		Bureaucrat b("John", 1);
		PresidentialPardonForm ppf;
		PresidentialPardonForm ppf2("John");
		PresidentialPardonForm ppf3(ppf2);
		b.signForm(ppf2);
		std::cout << b << ppf << ppf2 << ppf3 << std::endl;
		b.executeForm(ppf2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------END_OF_TEST1------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "------------------------------TEST2------------------" << std::endl;
	try
	{
		Bureaucrat b("Francis", 2);
		RobotomyRequestForm ppf3("Frankenstein");
		b.signForm(ppf3);
		std::cout << b << ppf3 << std::endl;
		b.executeForm(ppf3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------END_OF_TEST2------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "------------------------------TEST3------------------" << std::endl;
	try
	{
		Bureaucrat b("Frank", 2);
		ShrubberyCreationForm ppf3("Sequoia");
		b.signForm(ppf3);
		std::cout << b << ppf3 << std::endl;
		b.executeForm(ppf3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------END_OF_TEST3------------------" << std::endl;
	std::cout << std::endl;
	return (0);
}
