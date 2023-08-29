/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:31:40 by mguerga           #+#    #+#             */
/*   Updated: 2023/08/29 21:32:25 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fixed.hpp - ex00

#ifndef __Fixed_hpp__
# define __Fixed_hpp__

# include <iostream>

class Fixed
{
	private:
		int	val;
		const static int bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& a);
		Fixed& operator= (const Fixed& other);
		~Fixed(void);
		int	getRawBits(void) const;
		int	setRawBits(int const raw);
};

#endif //__Fixed_hpp__
