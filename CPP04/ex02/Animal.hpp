//Animal.hpp - ex00 - cpp04

#ifndef __Animal_hpp__
# define __Animal_hpp__

# include <iostream>
# include "Brain.hpp"

class	Animal
{
	protected:
		std::string type;
	public:
		virtual				~Animal(void);
		virtual std::string getType(void) const =0;
		virtual void		makeSound(void) const =0;
};

#endif // __Animal_hpp__
