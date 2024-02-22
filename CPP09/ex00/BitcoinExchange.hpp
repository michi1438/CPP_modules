/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:42:39 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/22 10:22:43 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BitcoinExchange_hpp__
# define __BitcoinExchange_hpp__

# include <fstream>
# include <cstdlib>
# include <map>
# include <string>
# include <sstream>
# include <iostream>

class BitcoinExchange 
{
	private:
		std::map<std::string, float> mapped; 

	public:
		//cdco
		BitcoinExchange(std::string filename);	
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& o); 
		BitcoinExchange&	operator=(const BitcoinExchange& o);
		//member func
		int	interpret(std::string input);	
			
};

#endif

