// Fixed.cpp - ex00

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

Fixed::Fixed(const Fixed& a) : val(a.val)
{
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->val);
}

int	Fixed::setRawBits(int const raw)
{
	(void)raw;
	return (0);
}
