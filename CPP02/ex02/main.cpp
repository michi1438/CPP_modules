// Fixed - ex00 - CPP02

#include <iostream>
#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& other);

int	main(void)
{
	Fixed a;
	Fixed b;

	Fixed const c( Fixed(42.42f) + Fixed(10.11f));
	Fixed const d( b );

	a = Fixed( -1234.4321f );

	b++;
	std::cout << " b++ is " << b++ << std::endl;
	std::cout << " ++b is " << ++b << std::endl;
	std::cout << " b++ is " << b++ << std::endl;
	std::cout << " ++b is " << ++b << std::endl;
	std::cout << " ++b is " << ++b << std::endl;
	std::cout << " b is " << b << std::endl;
/*
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	if (b == d)
		std::cout << "b and d are == " << std::endl;
	if (a == d)
		std::cout << "a and d are == " << std::endl;
	else if (a != d)
		std::cout << "a and d are != " << std::endl;
	if (b >= d)
		std::cout << "b is >= then d " << std::endl;
	if (b <= d)
		std::cout << "b is <= then d " << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "a - b is " << a - b << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
*/
	return (0);
}
