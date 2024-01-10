/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:39:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/10 18:54:19 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("John", 1);
	Bureaucrat d("Enrique", 155);
	Bureaucrat e;
	
	Bureaucrat c = b;

	c.decrement();
	c.decrement();
	c.decrement();
	b.increment();

	std::cout << b << c;
	d.increment();
	std::cout << d;
	std::cout << e;
	return (0);
}
