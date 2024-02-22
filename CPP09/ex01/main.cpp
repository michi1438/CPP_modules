/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:23:04 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/22 16:28:03 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char** av)
{
	if (ac != 2) 
	{
		std::cout << "Error: expects 1 argument." << std::endl;
		return 1;
	}
	else 
		RPN Claculator(av[1]);
	return 0;
}
