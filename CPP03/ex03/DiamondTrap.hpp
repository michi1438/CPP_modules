// DiamondTrap.hpp - ex03 - CPP03

#ifndef __DiamondTrap_hpp__
# define __DiamondTrap_hpp__

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap 
{
	private:
		std::string name;
	public:
				DiamondTrap(std::string name);
				DiamondTrap(void);
				DiamondTrap(const DiamondTrap& other);
				~DiamondTrap(void);

		DiamondTrap&	operator= (const DiamondTrap& other);

		void	whoAmI(void);
		void	attack(const std::string& target);
};

#endif // __DiamondTrap_hpp__
