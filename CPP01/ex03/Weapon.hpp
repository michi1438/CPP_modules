// Weapon.hpp

#ifndef __Weapon_hpp__
# define __Weapon_hpp__

# include <iostream>

class Weapon
{
	private:
		std::string	*type;
	public:
		Weapon (std::string type);
		//~Weapon ();
		const std::string	getType (void);
		void				setType (std::string);
};

#endif // __Weapon_hpp__
