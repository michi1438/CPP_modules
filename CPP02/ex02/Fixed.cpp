// Fixed.cpp - ex00

#include "Fixed.hpp"

// cdc_Coplien

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

Fixed::Fixed(const int interger)
{
	std::cout << "int constructor called" << std::endl;
	val = interger * (1 << bits);
}

Fixed::Fixed(const float flt)
{
	std::cout << "Float Constructor called" << std::endl;
	val = roundf(flt * (1 << bits));
	// how does it keep the sign, since shifted out ?
	// must be kept inside the shifting.
	// same for  exponent how is it not interpreted as part of the value ?
	// why only two digit after decimal for 1234.4321 ?
	// does this work with inf+/inf- and NaN ?
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->val = a.getRawBits();
}

// Operators

Fixed&	Fixed::operator= (const Fixed& other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->val = other.getRawBits();
	return (*this);
}

bool	Fixed::operator== (const Fixed& other) const
{
	if (this->val == other.val)
		return (true);
	return (false);
}

bool	Fixed::operator!= (const Fixed& other) const
{
	if (this->val != other.val)
		return (true);
	return (false);
}

bool	Fixed::operator>= (const Fixed& other) const
{
	if (this->val >= other.val)
		return (true);
	return (false);
}

bool	Fixed::operator<= (const Fixed& other) const
{
	if (this->val >= other.val)
		return (true);
	return (false);
}

bool	Fixed::operator> (const Fixed& other) const
{
	if (this->val > other.val)
		return (true);
	return (false);
}

bool	Fixed::operator< (const Fixed& other) const
{
	if (this->val < other.val)
		return (true);
	return (false);
}

Fixed	Fixed::operator+ (const Fixed& other) const
{
	return (float(this->val + other.val) / (1 << bits));
}

Fixed	Fixed::operator- (const Fixed& other) const
{
	return (float(this->val - other.val) / (1 << bits));
}

Fixed	Fixed::operator* (const Fixed& other) const
{
	return ((float(this->val) / (1 << bits)) * float(other.val) / (1 << bits));
}

Fixed	Fixed::operator/ (const Fixed& other) const
{
	return (float(this->val) / float(other.val));
}

Fixed	Fixed::operator++ (int)
{
	int	original = this->val;

	this->val += 1;
	return (float(original) / (1 << bits));
}

Fixed&	Fixed::operator++ ()
{
	this->val += 1;
	return (*this);
}
// Member Function

float	Fixed::toFloat(void) const
{
	return ((float)this->val / (1 << bits));
}

int	Fixed::toInt(void) const
{
	return (this->val / (1 << bits));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

int	Fixed::setRawBits(int const raw)
{
	val = raw;
	return (val);
}

// Other

std::ostream&	operator<<(std::ostream& os, const Fixed& F)
{
	os << F.toFloat();	
	return (os);
}
