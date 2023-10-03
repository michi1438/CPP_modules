/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:31:40 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/03 20:38:13 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fixed.hpp - ex00

#ifndef __Fixed_hpp__
# define __Fixed_hpp__

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	val;
		const static int bits = 8;
	public:
		Fixed(void);
		Fixed(const int interger);
		Fixed(const float flt);
		Fixed(const Fixed& a);
		~Fixed(void);
		Fixed& operator= (const Fixed& other);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		int		setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif //__Fixed_hpp__
