/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:31:40 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/03 20:41:42 by mguerga          ###   ########.fr       */
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
		int					val;
		const static int	bits = 8;
	public:
							Fixed(void);
							Fixed(const int interger);
							Fixed(const float flt);
							~Fixed(void);
							Fixed(const Fixed& a);

		Fixed&				operator= (const Fixed& other);
		bool				operator== (const Fixed& other) const;
		bool				operator!= (const Fixed& other) const;
		bool				operator>= (const Fixed& other) const;
		bool				operator<= (const Fixed& other) const;
		bool				operator> (const Fixed& other) const;
		bool				operator< (const Fixed& other) const;
		Fixed				operator+ (const Fixed& other) const;
		Fixed				operator- (const Fixed& other) const;
		Fixed				operator* (const Fixed& other) const;
		Fixed				operator/ (const Fixed& other) const;
		Fixed				operator++ (int);
		Fixed&				operator++ ();
		Fixed				operator-- (int);
		Fixed&				operator-- ();

		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);

		float				toFloat(void) const;
		int					toInt(void) const;
		int					getRawBits(void) const;
		int					setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif //__Fixed_hpp__
