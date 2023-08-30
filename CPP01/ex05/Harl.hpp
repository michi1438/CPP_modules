// Harl.hpp

#ifndef __Harl_hpp__
# define __Harl_hpp__

# include <iostream>

class	Harl
{
	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		typedef void	(Harl::*FuncPtr_t)(void);
		FuncPtr_t		func_arr[4];
		std::string		arr_levels[4];
	public:
						Harl(void);
		void			complain(std::string level);
};

#endif // __Harl_hpp__
