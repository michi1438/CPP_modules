// ClapTrap.hpp - ex00 - Cpp03

#ifndef __ClapTrap_hpp__
# define __ClapTrap_hpp__

# include <iostream>

class	ClapTrap
{
	protected:
		std::string Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;
	public:
					ClapTrap(std::string name);
					ClapTrap(void);
					~ClapTrap(void);
		int			getAttackDamage(void);
		int			getEnergyPoints(void);
		std::string	getName(void);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif //__ClapTrap_hpp__
