// Zombie.hpp

#ifndef __Zombie_hpp__
#define __Zombie_hpp__

#include <iostream>

class Zombie
{
	private :
		std::string	name;
	public :
		Zombie	(std::string name);	
		~Zombie	();	
		void	announce (void);
};

#endif //__Zombie_hpp__
