/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:09:25 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/12 09:38:25 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#ifndef __Span_cpp__
//# define __Span_cpp__

# include <iostream>
# include "Span.hpp"

// Exception
class OutOfBoundExcept : public std::exception
{	 
	const char *what() const throw()
	{
		return ("The container cannot hold anymore values...");
	}
};

class NoSpanExcept : public std::exception
{	 
	const char *what() const throw()
	{
		return ("The container does'nt contain enough value to calculate a span...");
	}
};
//cdco

Span::Span(unsigned int given_len) : max_len(given_len)
{
	this->vec.clear();
	//std::cout << vec.capacity() << std::endl;
}

Span::~Span(void) {}

Span::Span(const Span& o)
{
	*this = o;
}

Span& Span::operator=(const Span& o)
{
	this->max_len = o.max_len;
	this->vec = o.vec;

	return *this;
}

//member functions

void	Span::addNumber(int val)
{
	if (vec.size() < this->max_len)
		this->vec.push_back(val);
	else
		throw OutOfBoundExcept();
	//std::cout << "size =" << vec.size() << std::endl;
}

unsigned int	Span::shortestSpan(void) const
{
	if (vec.size() < 2)
		throw NoSpanExcept();
	unsigned int min_span = this->longestSpan();
	std::vector<int> temp = vec; 
	std::sort(temp.begin(), temp.end());
	std::vector<int>::const_iterator it = temp.begin();
	while (it != temp.end())
	{
		if (it != temp.begin() && min_span > static_cast<unsigned int>(*it - *(it - 1)))
			min_span = *it - *(it - 1);
		it++;
	}
	return (min_span);
}

unsigned int	Span::longestSpan(void) const
{
	if (vec.size() < 2)
		throw NoSpanExcept();
	int min_val = *(std::min_element(this->vec.begin(), this->vec.end()));
	int max_val = *(std::max_element(this->vec.begin(), this->vec.end()));
	return (max_val - min_val);	
}

void	Span::addRange(std::vector<int> tobadded)
{
	if (!tobadded.empty() && vec.size() + tobadded.size() < this->max_len)
	{
		this->vec.insert(vec.end(), tobadded.begin(), tobadded.end());
	}
	else
		throw OutOfBoundExcept();
}

//#endif
