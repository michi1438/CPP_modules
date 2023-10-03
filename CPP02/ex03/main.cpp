/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:26:13 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/03 21:21:53 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	
	const Point a (10.1f, 200.1f);
	const Point b (0.1f, 2);
	const Point c (100.62f, 20.75f);
	const Point d (70.459, 61.254);

	if (bsp (a, b, c, d) == true)
		std::cout << "given point fits in the triangle !" << std::endl;
	else
		std::cout << "given point is outside of the triangle !" << std::endl;

	//std::cout << "a = " << a << std::endl;
	//std::cout << "b = " << b << std::endl;
	//std::cout << "c = " << c << std::endl;
	//std::cout << "d = " << d << std::endl;
	
	return (0);
}
