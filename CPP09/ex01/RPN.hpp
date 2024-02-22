/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:28:22 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/22 16:44:43 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_hpp__
# define __RPN_hpp__

# include <iostream>
# include <sstream>
# include <stack>
# include <string>

class RPN
{
	private:
		std::stack<int> stack_val;
		std::stack<int> stack_ope;
	public:
		//cdco
		RPN(std::string);
		~RPN();
		RPN(const RPN& o);
		RPN& operator= (const RPN& o);

		//member func

};

#endif
