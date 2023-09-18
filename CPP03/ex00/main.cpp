// main.cpp - ex00 - cpp03

#include "ClapTrap.hpp"
#include <iostream>

int	Hit(ClapTrap *giver, ClapTrap *receiver)
{
	giver->attack(receiver->getName());
	if (giver->getEnergyPoints() >= 0)
	{
		receiver->takeDamage(giver->getAttackDamage());
		return (1);
	}
	return (0);
}

int	main(void)
{
	ClapTrap	ct41("Robert");
	ClapTrap	ct42("Vrobert");

	Hit(&ct41, &ct42);
	Hit(&ct41, &ct42);
	Hit(&ct41, &ct42);
	Hit(&ct42, &ct41);
	ct42.beRepaired(5);

	return (0);
}
