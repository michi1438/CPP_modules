// HumanB.hpp

#ifndef __HumanB_hpp__
# define __HumanB_hpp__

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		weap;
	public:
		void		attack();
		HumanB		(std::string name);
		void		setWeapon (Weapon w);
		void		setType(std::string nweap);
		~HumanB		();
};

#endif // __HumanB_hpp__
