/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:41:23 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/22 16:00:34 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: Program expects 1 argument !" << std::endl;
		return 1;
	}
	BitcoinExchange data_sheet("data.csv");
	data_sheet.interpret(av[1]);

	return 0;
}
