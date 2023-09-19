// BSP.cpp - ex03 - CPP02

#include "Point.hpp"

Fixed	get_longest_side(Point a, Point b, Point c, Point *L_side);

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	static int depth;

	Fixed	x_range[2];
	Fixed	y_range[2];
	Point	L_side[2];
	
	x_range[0] = Fixed::min(c.acc_axis(0), Fixed::min(a.acc_axis(0), b.acc_axis(0)));
	x_range[1] = Fixed::max(c.acc_axis(0), Fixed::max(a.acc_axis(0), b.acc_axis(0)));
	y_range[0] = Fixed::min(c.acc_axis(1), Fixed::min(a.acc_axis(1), b.acc_axis(1)));
	y_range[1] = Fixed::max(c.acc_axis(1), Fixed::max(a.acc_axis(1), b.acc_axis(1)));

	std::cout << "x_range[0] == " << x_range[0] << std::endl;
	std::cout << "x_range[1] == " << x_range[1] << std::endl;
	std::cout << "y_range[0] == " << y_range[0] << std::endl;
	std::cout << "y_range[1] == " << y_range[1] << std::endl;

	if (x_range[0] > point.acc_axis(0) || point.acc_axis(0) > x_range[1] || y_range[0] > point.acc_axis(1) || point.acc_axis(1) > y_range[1])
		return (false);
	if (depth++ == 100)
	{
		std::cout << "reached max depth !" << std::endl;
		return (true);
	}
	get_longest_side(a, b, c, L_side);
//	if (a == L_side[0] && b == L_side[1])
	//XXX	bsp(	
	return (true);
}

Fixed	get_longest_side(Point a, Point b, Point c, Point *L_side)
{
	Fixed side;
	Fixed temp_side;

	Fixed delta_x = Fixed::max(a.acc_axis(0), b.acc_axis(0)) - Fixed::min(a.acc_axis(0), b.acc_axis(0));
	Fixed delta_y = Fixed::max(a.acc_axis(1), b.acc_axis(1)) - Fixed::min(a.acc_axis(1), b.acc_axis(1));
	L_side[0] = a;
	L_side[1] = b;
	side = (float)sqrt(pow(delta_x.toFloat(), 2) + pow(delta_y.toFloat(), 2));
	delta_x = Fixed::max(b.acc_axis(0), c.acc_axis(0)) - Fixed::min(b.acc_axis(0), c.acc_axis(0));
	delta_y = Fixed::max(b.acc_axis(1), c.acc_axis(1)) - Fixed::min(b.acc_axis(1), c.acc_axis(1));
	temp_side = (float)sqrt(pow(delta_x.toFloat(), 2) + pow(delta_y.toFloat(), 2));
	if (temp_side > side)
	{
		side = temp_side;
		L_side[0] = b;
		L_side[1] = c;
	}
	delta_x = Fixed::max(a.acc_axis(0), c.acc_axis(0)) - Fixed::min(a.acc_axis(0), c.acc_axis(0));
	delta_y = Fixed::max(a.acc_axis(1), c.acc_axis(1)) - Fixed::min(a.acc_axis(1), c.acc_axis(1));
	temp_side = (float)sqrt(pow(delta_x.toFloat(), 2) + pow(delta_y.toFloat(), 2));
	if (temp_side > side)
	{
		side = temp_side;
		L_side[0] = c;
		L_side[1] = a;
	}
	std::cout << "delta_x = " << delta_x << std::endl;
	std::cout << "delta_y = " << delta_y << std::endl;
	std::cout << "side = " << side << std::endl;
	return (side);
}
