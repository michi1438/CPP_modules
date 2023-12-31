// Fixed.cpp - ex03

#include "Fixed.hpp"

// cdc_Coplien

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

Fixed::Fixed(const int interger)
{
//	std::cout << "int constructor called" << std::endl;
	val = interger * (1 << bits);
}

Fixed::Fixed(const float flt)
{
//	std::cout << "Float Constructor called" << std::endl;
	val = roundf(flt * (1 << bits));
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a)
{
//	std::cout << "Copy Constructor called" << std::endl;
	this->val = a.getRawBits();
}

// Operators

Fixed&	Fixed::operator= (const Fixed& other)
{
//	std::cout << "Copy assignement operator called" << std::endl;
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

Fixed	Fixed::operator-- (int)
{
	int	original = this->val;

	this->val -= 1;
	return (float(original) / (1 << bits));
}

Fixed&	Fixed::operator-- ()
{
	this->val -= 1;
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
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

int	Fixed::setRawBits(int const raw)
{
	val = raw;
	return (val);
}

// Is this necessary ?
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.val < b.val)
		return (a);
	else if (b.val < a.val)
		return (b);
//	else
//		std::cout << "No min, they are equals" << std::endl;
	return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.val < b.val)
		return (a);
	else if (b.val < a.val)
		return (b);
//	else
//		std::cout << "No min, they are equals" << std::endl;
	return (a);
}

// Is this necessary ?
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.val > b.val)
		return (a);
	else if (b.val > a.val)
		return (b);
//	else
//		std::cout << "No max, they are equals" << std::endl;
	return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.val > b.val)
		return (a);
	else if (b.val > a.val)
		return (b);
//	else
//		std::cout << "No max, they are equals" << std::endl;
	return (a);
}

// Other

std::ostream&	operator<<(std::ostream& os, const Fixed& F)
{
	os << F.toFloat();	

	return (os);
}
