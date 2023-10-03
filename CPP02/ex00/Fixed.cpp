// Fixed.cpp - ex00

#include "Fixed.hpp"

// cdc

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	val = 0;
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

// operator

Fixed&	Fixed::operator= (const Fixed& other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	val = other.getRawBits();
	return (*this);
}

// member functions

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (val);
}

void	Fixed::setRawBits(int const raw)
{
	val = raw;
}
