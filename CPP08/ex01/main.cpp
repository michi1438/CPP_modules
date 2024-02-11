/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:36:13 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/11 19:18:19 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span <int>s(11);
	Span <int>ss(1);
	
	try
	{
		ss.addNumber(-22221151);
		ss.addNumber(113);
		std::cout << "longestspan = " << ss.longestSpan() << std::endl;
		std::cout << "shortestspan = " << ss.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		s.addNumber(1151);
		s.addNumber(113);
		std::cout << "longestspan = " << s.longestSpan() << std::endl;
		std::cout << "shortestspan = " << s.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		s.addNumber(1171);
		s.addNumber(-110);
		s.addNumber(1142);
		s.addNumber(11111);
		s.addNumber(1111111);
		s.addRange(ss.vec);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "longestspan = " << s.longestSpan() << std::endl;
	std::cout << "shortestspan = " << s.shortestSpan() << std::endl;

	return 0;
}
