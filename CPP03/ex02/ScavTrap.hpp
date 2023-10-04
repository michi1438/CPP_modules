// ScavTrap.hpp - ex01 - Cpp03

#ifndef __ScavTrap_hpp__
# define __ScavTrap_hpp__

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
					ScavTrap(std::string name);
					ScavTrap(void);
					ScavTrap(const ScavTrap& other);
					~ScavTrap(void);

		ScavTrap&	operator= (const ScavTrap& other);

		void		attack(const std::string& target);	
		void		guardGate(void);
};

#endif // __ScavTrap_hpp__
