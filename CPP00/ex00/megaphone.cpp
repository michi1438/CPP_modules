// megaphone.cpp 
#include <iostream>
#include <cctype>

int	to_upper_wrapper(int ac, char **av);

int	main(int ac, char **av)
{
	if (ac > 1)
		to_upper_wrapper(ac, av);
	else if (ac == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *\n"; 
	return (0);
}

int	to_upper_wrapper(int ac, char **av)
{
	int	ch;
	int	i, y (0);

	y = 0;
	{
		while (++y < ac)
		{
			i = 0;
			while (av[y][i] != '\0')
			{
				ch = std::toupper((unsigned char)av[y][i++]);
				std::cout << char(ch);
			}
		}
		std::cout << '\n';
	}
	return (0);
}
