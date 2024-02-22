/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:08:57 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/22 15:59:54 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//cdco


BitcoinExchange::BitcoinExchange(std::string filename)
{
	std::ifstream ofs(filename.c_str());	
	std::string line;
	std::string wrd[2];
	int i = 0;
	while (std::getline(ofs, line))
	{
		if (i++ != 0)
		{
			wrd[0] = line.substr(0, 10);
			wrd[1] = line.substr(11);
			float valuef = atof(wrd[1].c_str());
			this->mapped[wrd[0]] = valuef;
		}
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

//member func

int BitcoinExchange::interpret(std::string filename)
{
	std::ifstream ofs(filename.c_str());	
	if (ofs.is_open() == false)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	std::string line;
	std::string wrd[3];
	std::map<std::string, float>::iterator it_beg = this->mapped.begin();
	int i = 0;
	while (std::getline(ofs, line))
	{
		if (i++ != 0)
		{
			std::istringstream iss(line);
			if (iss >> wrd[0] && wrd[0].size() == 10 && iss >> wrd[1] && iss >> wrd[2])
			{
				while (it_beg++ != this->mapped.end())	
					if (!(it_beg->first.compare(wrd[0]) <= 0))
						break;
				float valuef = atof(wrd[2].c_str());
				if (valuef > 1000)
					std::cout << "Error: too large a number." << std::endl;
				else if (valuef < 0)
					std::cout << "Error: not a positive number." << std::endl;
				else if (it_beg != this->mapped.end())
					std::cout << wrd[0] << " => " << valuef << " = " << ((--it_beg)->second) * valuef << std::endl;
				it_beg = this->mapped.begin();
			}
			else
				std::cout << "Error: bad input => " << line << std::endl;
		}
	}
	return (0);
}
