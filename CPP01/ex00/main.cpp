// main.cpp

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

void	testfunc(std::string str)
{
	Zombie *Zom (newZombie(str));
	Zom->announce();
	delete Zom;
}

int	main(void)
{
	std::string	str;

	std::cin >> str;
	testfunc(str);
	std::cin >> str;
	randomChump(str);
}

void	randomChump(std::string name)
{
	Zombie zomb (name);	

	zomb.announce();
}

Zombie	*newZombie(std::string name)
{
	Zombie *zumb = new Zombie (name); 

	return (zumb);
}

