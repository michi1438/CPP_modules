/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:02:55 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/05 13:07:46 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ScalarConverter_hpp__
# define __ScalarConverter_hpp__

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cstdlib>

class	ScalarConverter
{
	public:
		virtual		~ScalarConverter(void) = 0;
		static void convert(std::string lit);
};

//std::ostream& operator<<(std::ostream& os, const ScalarConverter& other);

#endif
