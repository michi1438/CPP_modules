// Point.cpp ex03 - cpp02

#include "Point.hpp"


// cdc Coplien
Point::Point (void) {}

Point::Point (float fx, float fy) : x(fx), y(fy) {}

Point::~Point (void) {}

Point::Point (const Point& other) : x(other.x), y(other.y) {}


// operator overcharge

const Point&	Point::operator= (const Point& other)
{
	return (other);
}

// Member functions

void	Point::print_coor(std::ostream& os) const
{
	os << "(" << this->x << ";" << this->y << ")";
}

// Isertion operator
std::ostream& operator<<(std::ostream& os, const Point& other)
{
	other.print_coor(os);
	return (os);
}
