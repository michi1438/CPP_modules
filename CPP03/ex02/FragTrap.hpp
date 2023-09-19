// FrapTrap.hpp - ex02 - Cpp03

#ifndef __FragTrap_hpp__
# define __FragTrap_hpp__

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
					FragTrap(std::string name);
					~FragTrap(void);
		void		attack(const std::string& target);	
		void		highFivesGuys(void);
};

#endif // __FragTrap_hpp__
