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
							Animal(void);	
		virtual				~Animal(void);
		virtual std::string getType(void) const;
		virtual void		makeSound(void) const;
};

#endif // __Animal_hpp__
