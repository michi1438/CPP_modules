/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:47:16 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/06 01:23:41 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {}

Base*	Base::generate(void)
{
	std::srand(std::time(NULL));
	int rand = std::rand();
	switch (rand % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "Identify says this is a \"A\" class" << std::endl;
	if (dynamic_cast<B*>(p) != 0)
		std::cout << "Identify says this is a \"B\" class" << std::endl;
	if (dynamic_cast<C*>(p) != 0)
		std::cout << "Identify says this is a \"C\" class" << std::endl;
}

void	Base::identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "Identify by ref says this is a \"A\" class" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "Identify by ref says this is a \"B\" class" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Identify by ref says this is a \"C\" class" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}
