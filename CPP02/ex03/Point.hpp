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
					Point(const Point& other);
					~Point(void);

		bool				operator== (const Point& other) const;
		const Point&		operator= (const Point& other);	

		void		print_coor(std::ostream& os) const;
		Fixed		acc_axis(int axis) const;

		enum e_axis
		{
			X = 0,
			Y = 1,
		};
};

std::ostream& operator<<(std::ostream& os, const Point& other);

#endif // __Point_hpp__
