// main.cpp - Harl_filter - ex06

#include "Harl.hpp"

int	indexify(char *av)
{
	if (av == NULL)
		return (0);
	int	i (0);
	std::string given_val (av);	
	std::string diwe [4] = {"debug", "info", "warning", "error"};
	while (i < 4)
	{
		switch (given_val.compare (diwe[i]))
		{
			case 0:
				return (i);
			default:
				;
		}
		i++;
	}
	return (-1);
}

int	main (int ac, char **av)
{
	
	int level = indexify(av[1]);

	if (ac > 2)
	{
		std::cout << "too many arguments..." << std::endl;
		return (1);
	}
	if (level == -1)
	{
		std::cout << "[Probably complaining about insignificant problems !]" << std::endl; 
		return (1);
	}
	Harl harl (level);
	harl.complain("werror");
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("werror");
	return (0);
}

		
