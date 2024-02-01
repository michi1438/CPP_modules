/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:13:08 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 18:52:24 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//member func

static void ScalarConverter::convert(std::string lit)
{
	char	c_lit;

	if (lit.length() == 1 && std::isdigit(lit.c_str()[0]) == 0)
		c_lit = std::stoi(lit);
	std::cout << "char: '" << c_lit << "'" << std::endl;	
}

// Other

	
