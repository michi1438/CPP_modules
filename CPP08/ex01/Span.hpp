/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:45:10 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/12 09:54:52 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Span_hpp__
# define __Span_hpp__

# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	vec;
		unsigned int	max_len;

	public:
		Span(unsigned int given_len);
		~Span(void);
		Span(const Span& o);
	
		Span& operator=(const Span& o);

		void	addNumber(int val);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void	addRange(std::vector<int> tobadded);
};

//# include "Span.cpp"

#endif
