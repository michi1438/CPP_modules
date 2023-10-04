// FrapTrap.hpp - ex02 - Cpp03

#ifndef __FragTrap_hpp__
# define __FragTrap_hpp__

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
					FragTrap(std::string name);
					FragTrap(void);
					FragTrap(const FragTrap& other);
					~FragTrap(void);

		FragTrap&	operator= (const FragTrap& other);

		void		attack(const std::string& target);	
		void		highFivesGuys(void);
		int			ft_getHP(void);
		int			ft_getatt(void);
};

#endif // __FragTrap_hpp__
