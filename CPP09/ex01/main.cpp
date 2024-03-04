/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:23:04 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/04 17:18:24 by mguerga          ###   ########.fr       */
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
	{
		try
		{
			RPN rpn(av[1]);
			float res = rpn.calc();
			std::cout << res << std::endl;
			return rpn.status_code; 
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
			return 1;
		}
	}
}
