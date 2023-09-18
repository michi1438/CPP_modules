// BSP.cpp - ex03 - CPP02

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	if (point == a || point == b || point == c)
		return (false);
