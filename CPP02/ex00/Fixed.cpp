// Fixed.cpp - ex00

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

Fixed&	Fixed::operator= (const Fixed& other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->val = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& a)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->val = a.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

int	Fixed::setRawBits(int const raw)
{
	(void)raw;
	return (0);
}
