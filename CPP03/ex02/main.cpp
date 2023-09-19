// main.cpp - ex00 - cpp03

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
	ScavTrap	st41("Scavbert");
	FragTrap	ft41("fragbert");
	ClapTrap	ct42("Vrobert");
	
	st41.attack(ct42.getName());
	ct42.attack(st41.getName());
	st41.beRepaired(5);
	st41.guardGate();
	ft41.highFivesGuys();

	return (0);
}
