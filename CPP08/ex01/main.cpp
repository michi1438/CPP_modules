/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:36:13 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/13 12:38:35 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
	}
/*
	Span s(1100);
	Span ss(1);
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
		std::vector<int> v(1000, 1);

		s.addNumber(1171);
		s.addNumber(-110);
		s.addNumber(1142);
		s.addNumber(11111);
		s.addNumber(1111111);
		s.addRange(v);
		std::cout << "longestspan = " << s.longestSpan() << std::endl;
		std::cout << "shortestspan = " << s.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::vector<int> v(10000000, 1);

		Span sss(10000050);
		sss.addRange(v);
		sss.addNumber(1142);
		sss.addNumber(11111);
		sss.addNumber(1111111);
		std::cout << "longestspan = " << sss.longestSpan() << std::endl;
		std::cout << "shortestspan = " << sss.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
*/	
}
