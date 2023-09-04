// Harl.cpp - ex05

#include "Harl.hpp"

Harl::Harl(void)
{
	func_arr[0] = &Harl::debug;
	arr_levels[0] = "debug";
	func_arr[1] = &Harl::info;
	arr_levels[1] = "info";
	func_arr[2] = &Harl::warning;
	arr_levels[2] = "warning";
	func_arr[3] = &Harl::error;
	arr_levels[3] = "error";
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i (0);

	while (i < 4)
	{
		if (arr_levels[i].compare(level) == 0)
			(this->*func_arr[i])();
		i++;
	}
	return ;
}
