/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:08:57 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/13 21:41:06 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//cdco

BitcoinExchange::BitcoinExchange(std::string filename)
{
	std::ifstream ofs(filename.c_str());	
	std::string line;
	std::string wrd[3];
	while (std::getline(ofs, line))
	{
		std::istringstream iss(line);
		if (iss >> wrd[0] && iss >> wrd[1] && iss >> wrd[2])
		{
			float valuef = atof(wrd[2].c_str());
			this->mapped[wrd[0]] = valuef;
		}
		else
			this->mapped[line] = -1;
		std::cout << wrd[0] << " = " << this->mapped[wrd[0]] << std::endl;
	}
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& o)
{
	*this = o;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& o)
{
	this->mapped = o.mapped;
	return *this;	
}
