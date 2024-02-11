/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:45:10 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/11 19:13:41 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Span_hpp__
# define __Span_hpp__

# include <vector>
# include <iostream>
# include <algorithm>

template <typename T> 
class Span
{
	private:

	public:
		std::vector<T>	vec;
		unsigned int	max_len;

		Span(unsigned int given_len);
		~Span(void);
		Span(const Span& o);
	
		Span& operator=(const Span& o);

		void	addNumber(T val);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void	addRange(std::vector<T> tobadded);
};

# include "Span.cpp"

#endif
