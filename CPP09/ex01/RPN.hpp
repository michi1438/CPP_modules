/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:28:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/04 17:16:45 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_hpp__
# define __RPN_hpp__

# include <iostream>
# include <sstream>
# include <stack>
# include <string>
# include <cstdlib>
# include <climits>

class RPN
{
	private:
		std::stack<int> stack;
		std::stack<int> stacktemp;
		bool pushope(std::string seg);

	public:
		int status_code;
		
		//cdco
		RPN(std::string);
		~RPN();
		RPN(const RPN& o);
		RPN& operator= (const RPN& o);

		//member func
		float calc();
		int eval(int vec[3]);

		class ExceptInputErr : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Error: arg doesn't evaluate...");
				}
		};
		class ExceptDivisionZero: public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Error: can't divide by zero...");
				}
		};
};

#endif
