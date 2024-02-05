/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:36:02 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/05 14:57:09 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "need one argument !" << std::endl;	
		return 1;
	}
	//ScalarConverter sc;
	std::string strav = av[1];
	ScalarConverter::convert(strav);
	return 0;
}
