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
		//operator overload to (setRawBits):
		~Fixed(void);
		int	getRawBits(void) const;
		int	setRawBits(int const raw);
};

#endif //__Fixed_hpp__
