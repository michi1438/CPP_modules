/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:39:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/23 13:22:39 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b("John", 1);
	Bureaucrat d("Enrique", 150);
	
	std::cout << b;
	std::cout << d;

	Form f;
	Form ff("taxe reduction", 1, 1);
	std::cout << f;
	std::cout << ff;

	std::cout << std::endl;
	f.beSigned(d);
	d.signForm(f);

	return (0);
}
