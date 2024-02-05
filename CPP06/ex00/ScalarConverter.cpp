/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:13:08 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/05 15:07:47 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//member func

void ScalarConverter::convert(const std::string lit)
{
	const	std::string specialTerm[8] = {"-inff", "-inf", "inff", "inf",
	   	"+inff", "+inf", "nanf", "nan"};
	int i;

	for (i = 0; i < 8; i++)
	{
		if (lit == specialTerm[i])
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			switch (i)
			{
				case 0:
				case 1:
					std::cout << "float : " << -std::numeric_limits<float>::infinity() << "f" << std::endl;
					std::cout << "double : " << -std::numeric_limits<double>::infinity() << std::endl;
					return ;
				case 2:
				case 3:
				case 4:
				case 5:
					std::cout << "float : " << std::numeric_limits<float>::infinity() << "f" << std::endl;
					std::cout << "double : " << std::numeric_limits<double>::infinity() << std::endl;
					return ;
				case 6:
				case 7:
					std::cout << "float : " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
					std::cout << "double : " << std::numeric_limits<double>::quiet_NaN() << std::endl;
					return ;
				default:
					return;
			}
		}
	}
	try
	{
		size_t pos = lit.find_last_of("+-");
		if (pos != std::string::npos && pos != 0)
			throw std::invalid_argument("wrong format\"+-\"");
		pos = lit.find_first_of("f");
		if (pos != lit.find_last_of("f"))
			throw std::invalid_argument("wrong format \"f\"");
		pos = lit.find_first_of(".");
		if ( pos != lit.find_last_of("."))
			throw std::invalid_argument("wrong format \".\"");
	}
	catch ( const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
		return; 
	}
	if (lit.length() == 1 && std::isprint(lit.c_str()[0]) != 0 && std::isdigit(lit.c_str()[0]) == 0)
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "char: '" << static_cast<char>(lit.c_str()[0]) << "'" << std::endl;	
		std::cout << "int: " << static_cast<int>(lit.c_str()[0]) << "" << std::endl;	
		std::cout << "float: " << static_cast<float>(lit.c_str()[0]) << "f" << std::endl;	
		std::cout << "double: " << static_cast<double>(lit.c_str()[0]) << "" << std::endl;	
		return ;
	}
	long l_lit = std::atol(lit.c_str());
	if (lit.find_first_not_of("+-0123456789") == std::string::npos &&  2147483647 >= l_lit && l_lit >= -2147483648)
	{

		std::cout << std::fixed << std::setprecision(1);
		if (l_lit >= 32 && l_lit <= 126)
			std::cout << "char: '" << static_cast<char>(l_lit) << "'" << std::endl;	
		else if (l_lit >= 0 && l_lit <= 127)
			std::cout << "char: " << "Non displayable" << std::endl;	
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << l_lit << "" << std::endl;	
		std::cout << "float: " << static_cast<float>(l_lit) << "f" << std::endl;	
		std::cout << "double: " << static_cast<double>(l_lit) << "" << std::endl;	
		return ;
	}
	double d_lit = std::atof(lit.c_str());
	if (lit.find_first_not_of("+-0123456789.") == std::string::npos)
	{
		std::cout << std::fixed << std::setprecision(1);
		if (d_lit >= 32 && d_lit <= 126)
			std::cout << "char: '" << static_cast<char>(d_lit) << "'" << std::endl;	
		else if (d_lit >= 0 && d_lit <= 127)
			std::cout << "char: " << "Non displayable" << std::endl;	
		else
			std::cout << "char: impossible" << std::endl;
		if (d_lit >= std::numeric_limits<int>::min() && d_lit <= std::numeric_limits<int>::max())
			std::cout << "int: " << static_cast<int>(d_lit) << "" << std::endl;	
		else
			std::cout << "int: impossible" << std::endl;
		if (d_lit >= -std::numeric_limits<float>::max() && d_lit <= std::numeric_limits<float>::max())
			std::cout << "float: " << static_cast<float>(d_lit) << "f" << std::endl;	
		else
			std::cout << "float: impossible" << std::endl;
		std::cout << "double: " << d_lit << "" << std::endl;	
		return ;
	}
	if (lit.find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		std::cout << std::fixed << std::setprecision(1);
		if (d_lit >= 32 && d_lit <= 126)
			std::cout << "char: '" << static_cast<char>(d_lit) << "'" << std::endl;	
		else if (d_lit >= 0 && d_lit <= 127)
			std::cout << "char: " << "Non displayable" << std::endl;	
		else
			std::cout << "char: impossible" << std::endl;
		if (d_lit >= std::numeric_limits<int>::min() && d_lit <= std::numeric_limits<int>::max())
			std::cout << "int: " << static_cast<int>(d_lit) << "" << std::endl;	
		else
			std::cout << "int: impossible" << std::endl;
		if (d_lit >= -std::numeric_limits<float>::max() && d_lit <= std::numeric_limits<float>::max())
			std::cout << "float: " << static_cast<float>(d_lit) << "f" << std::endl;	
		else
			std::cout << "float: impossible" << std::endl;
		std::cout << "double: " << static_cast<double>(d_lit) << "" << std::endl;	
		return ;
	}
}
