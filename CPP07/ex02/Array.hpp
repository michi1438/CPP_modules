/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:08:53 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/06 22:23:03 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Array_hpp__
# define __Array_hpp__

# include <iostream>

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

	size_t	size(void);
};

# include "Array.tpp"

#endif
