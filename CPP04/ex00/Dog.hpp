//Dog.hpp - ex00 -cpp04

#ifndef __Dog_hpp__
# define __Dog_hpp__

# include "Animal.hpp"

class	Dog : virtual public Animal
{
	public:
		Dog(void);
		~Dog(void);
		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif // __Dog_hpp__
