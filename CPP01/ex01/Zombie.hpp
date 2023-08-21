// Zombie.hpp

#ifndef __Zombie_hpp__
#define __Zombie_hpp__

#include <iostream>

class Zombie
{
	private :
		std::string	name;
	public :
		Zombie	();
		~Zombie	();
		Zombie	(std::string name);	
		void	announce (void);
		void	give(std::string);
};

#endif //__Zombie_hpp__
