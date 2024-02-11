/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:09:25 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/11 19:24:43 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Span_cpp__
# define __Span_cpp__

# include <iostream>

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

template <typename T> 
Span<T>::Span(unsigned int given_len) : max_len(given_len)
{
	this->vec.clear();
	//std::cout << vec.capacity() << std::endl;
}

template <typename T> 
Span<T>::~Span(void) {}

template <typename T>
Span<T>::Span(const Span<T>& o)
{
	*this = o;
}

template <typename T>
Span<T>& Span<T>::operator=(const Span<T>& o)
{
	this->len = o.len();
	this->vec = vec(this->len);

	return *this;
}

//member functions

template <typename T>
void	Span<T>::addNumber(T val)
{
	if (vec.size() < this->max_len)
		this->vec.push_back(val);
	else
		throw OutOfBoundExcept();
	//std::cout << "size =" << vec.size() << std::endl;
}

template <typename T>
unsigned int	Span<T>::shortestSpan(void) const
{
	if (vec.size() < 2)
		throw NoSpanExcept();
	unsigned int min_span = this->longestSpan();
	std::vector<T> temp = vec; 
	std::sort(temp.begin(), temp.end());
	typename std::vector<T>::const_iterator it = temp.begin();
	while (it != temp.end())
	{
		if (it != temp.begin() && min_span > static_cast<unsigned int>(*it - *(it - 1)))
			min_span = *it - *(it - 1);
		it++;
	}
	return (min_span);
}

template <typename T>
unsigned int	Span<T>::longestSpan(void) const
{
	if (vec.size() < 2)
		throw NoSpanExcept();
	int min_val = *(std::min_element(this->vec.begin(), this->vec.end()));
	int max_val = *(std::max_element(this->vec.begin(), this->vec.end()));
	return (max_val - min_val);	
}

template <typename T>
void	Span<T>::addRange(std::vector<T> tobadded)
{
	if (!tobadded.empty() && vec.size() + tobadded.size() < this->max_len)
	{
		this->vec.insert(vec.end(), tobadded.begin(), tobadded.end());
	}
	else
		throw OutOfBoundExcept();
}

#endif
