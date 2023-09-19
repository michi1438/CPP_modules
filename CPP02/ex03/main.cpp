// Fixed - ex03 - CPP02

#include <iostream>
#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	
	const Point a (1.1f, 2.1f);
	const Point b (0.1f, 2);
	const Point c (1.62f, 20.75f);
	const Point d (11, 4);// Fixed copy constructor is called implicetly... it is a real copy, I can't implicitely initialize x and y as they are constant ! 

	if (bsp (a, b, c, d) == true)
		std::cout << "given point fits in the triangle !" << std::endl;
	else
		std::cout << "given point is outside of the triangle !" << std::endl;
	//std::cout << "a = " << a << std::endl;
	//std::cout << "b = " << b << std::endl;
	//std::cout << "c = " << c << std::endl;
	//std::cout << "d = " << d << std::endl;
	//
	return (0);
}
