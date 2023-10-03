/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:16:11 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/03 21:22:30 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#define MAX_DEPTH 100

enum e_axis
{
	X = 0,
	Y = 1,
};

int	get_longest_side(Point a, Point b, Point c, Fixed *L_side);
const Point	get_mid(const Point A, const Point B);

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	static int depth;

	Fixed	x_range[2];
	Fixed	y_range[2];
	Fixed	L_side;
	int		side;
	
	x_range[X] = Fixed::min(c.acc_axis(X), Fixed::min(a.acc_axis(X), b.acc_axis(X)));
	x_range[1] = Fixed::max(c.acc_axis(X), Fixed::max(a.acc_axis(X), b.acc_axis(X)));
	y_range[0] = Fixed::min(c.acc_axis(Y), Fixed::min(a.acc_axis(Y), b.acc_axis(Y)));
	y_range[1] = Fixed::max(c.acc_axis(Y), Fixed::max(a.acc_axis(Y), b.acc_axis(Y)));

	std::cout << "x_range[0] == " << x_range[0] << std::endl;
	std::cout << "x_range[1] == " << x_range[1] << std::endl;
	std::cout << "y_range[0] == " << y_range[0] << std::endl;
	std::cout << "y_range[1] == " << y_range[1] << std::endl;

	if (x_range[0] > point.acc_axis(X) || point.acc_axis(X) > x_range[1] || y_range[0] > point.acc_axis(Y) || point.acc_axis(Y) > y_range[1])
	{
		std::cout << "point is out of this field ! depth == " << depth << std::endl << std::endl;
		return (false);
	}
	if (depth++ == MAX_DEPTH)
	{
		std::cout << "reached max depth !" << std::endl;
		return (true);
	}
	std::cout << std::endl;
	side = get_longest_side(a, b, c, &L_side);
	if (side == 0)
	{
		const Point mid = get_mid(a, b);
		std::cout << "mid == " << mid << ", at depth of "<< depth << std::endl;
		if (bsp(a, c, mid, point) == true || bsp(b, c, mid, point) == true)
			return (true);
	}
	else if (side == 1)
	{
		const Point mid = get_mid(b, c);
		std::cout << "mid == " << mid << ", at depth of "<< depth << std::endl;
		if (bsp(c, a, mid, point) == true || bsp(b, a, mid, point) == true)
			return (true);
	}
	else if (side == 2)
	{
		const Point mid = get_mid(c, a);
		std::cout << "mid == " << mid << ", at depth of "<< depth << std::endl;
		if (bsp(c, b, mid, point) == true || bsp(a, b, mid, point) == true)
			return (true);
	}
	else if (side == 3)
		return (true);
	return (false);
}

const Point	get_mid(const Point A, const Point B)
{
	Fixed	delta_x = Fixed::max(A.acc_axis(X), B.acc_axis(X)) - Fixed::min(A.acc_axis(X), B.acc_axis(X));
	Fixed	delta_y = Fixed::max(A.acc_axis(Y), B.acc_axis(Y)) - Fixed::min(A.acc_axis(Y), B.acc_axis(Y));

	const Point ret((Fixed::min(A.acc_axis(X), B.acc_axis(X)) + delta_x / 2).toFloat(), (Fixed::min(A.acc_axis(Y), B.acc_axis(Y)) + delta_y / 2).toFloat());

	return (ret);
}


int	get_longest_side(Point a, Point b, Point c, Fixed *L_side)
{
	int side (X);
	Fixed temp_side;

	Fixed delta_x = Fixed::max(a.acc_axis(X), b.acc_axis(X)) - Fixed::min(a.acc_axis(X), b.acc_axis(X));
	Fixed delta_y = Fixed::max(a.acc_axis(Y), b.acc_axis(Y)) - Fixed::min(a.acc_axis(Y), b.acc_axis(Y));
	*L_side = (float)sqrt(pow(delta_x.toFloat(), 2) + pow(delta_y.toFloat(), 2));
	delta_x = Fixed::max(b.acc_axis(X), c.acc_axis(X)) - Fixed::min(b.acc_axis(X), c.acc_axis(X));
	delta_y = Fixed::max(b.acc_axis(Y), c.acc_axis(Y)) - Fixed::min(b.acc_axis(Y), c.acc_axis(Y));
	temp_side = (float)sqrt(pow(delta_x.toFloat(), 2) + pow(delta_y.toFloat(), 2));
	if (temp_side > *L_side)
	{
		*L_side = temp_side;
		side = 1;
	}
	delta_x = Fixed::max(a.acc_axis(X), c.acc_axis(X)) - Fixed::min(a.acc_axis(X), c.acc_axis(X));
	delta_y = Fixed::max(a.acc_axis(Y), c.acc_axis(Y)) - Fixed::min(a.acc_axis(Y), c.acc_axis(Y));
	temp_side = (float)sqrt(pow(delta_x.toFloat(), 2) + pow(delta_y.toFloat(), 2));
	if (temp_side > *L_side)
	{
		*L_side = temp_side;
		side = 2;
	}
	if (delta_x == 0 || delta_y == 0)
		return (3);
//	std::cout << "delta_x = " << delta_x << std::endl;
//	std::cout << "delta_y = " << delta_y << std::endl;
//	std::cout << "L_side = " << *L_side << std::endl;
//	std::cout << "side = " << side << std::endl;
	return (side);
}
