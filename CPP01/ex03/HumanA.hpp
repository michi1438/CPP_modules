// HumanA.hpp

#ifndef __HumanA_hpp__
# define __HumanA_hpp__

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon weap;
	public:
		void	attack();
		HumanA (std::string name, Weapon w);
};

#endif // __HumanA_hpp__
