// main.cpp

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	std::string	str;

	std::cin >> str;
	Zombie *horde (zombieHorde(5, str));
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
}
