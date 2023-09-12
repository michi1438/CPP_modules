// Point.hpp ex03 - cpp02

#ifndef __Point_hpp__ 
# define __Point_hpp__

# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
					Point(void);	
					Point(const float fx, const float fy);	
					~Point(void);
					Point(const Point& other);
		const Point&		operator= (const Point& other);	
		void		print_coor(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, const Point& other);

#endif // __Point_hpp__
