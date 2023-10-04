// main.cpp - ex00 - cpp03

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
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
	FragTrap	ft41("Fragbert");
	ClapTrap	ct42("Vrobert");
	FragTrap	ft43(ft41);
	FragTrap	ft44 = ft41;
	DiamondTrap dt21("Megabert");
	DiamondTrap dt22 = dt21;
	
	dt21.whoAmI();
	dt22.whoAmI();
	dt21.guardGate();
	dt21.highFivesGuys();
	dt21.attack(ct42.getName());
	st41.attack(ct42.getName());
	ct42.attack(st41.getName());
	st41.beRepaired(5);
	st41.guardGate();
	ft41.highFivesGuys();

	return (0);
}
