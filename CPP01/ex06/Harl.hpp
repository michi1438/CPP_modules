// Harl_filter.hpp

#ifndef __Harl_hpp__
# define __Harl_hpp__

# include <iostream>
# include <map>

class	Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		typedef void	(Harl::*FuncPtr)(void);
		std::map<std::string, FuncPtr> FuncMap;
	public:
		Harl(int given_val);
		void	complain(std::string level);
};

#endif // __Harl_hpp__
