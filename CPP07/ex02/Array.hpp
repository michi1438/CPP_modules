/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:08:53 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/08 17:47:03 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Array_hpp__
# define __Array_hpp__

# include <iostream>
# include <cstdlib>

template <typename T>
class	Array
{
	private:
		T				*tab;
		unsigned int	tab_size;
	public:
			Array(void);
			Array(unsigned int n_elem);	
			~Array(void);
			Array(const Array& o); 

	Array&	operator=(const Array& o);

	T&	operator[](const size_t ind);
	size_t	size(void) const;
	
	class OutOfBoundException : public std::exception
	{
		public:
			const char *what() const throw();
	};

};

/*
template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& other);
*/

# include "Array.tpp"

#endif
