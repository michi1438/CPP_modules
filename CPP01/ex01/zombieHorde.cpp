// zombieHorde.cpp -

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i (0);
	Zombie *zamb = new Zombie[N];

	while (i < N)
		zamb[i++].give(name);	
	return (zamb);
}
