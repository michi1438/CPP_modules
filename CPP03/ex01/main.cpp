/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:02:03 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/04 14:07:20 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
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
	ClapTrap	ct42("Vrobert");
	ClapTrap	ct45(ct42);
	ScavTrap	st43(st41);
	ScavTrap	st44 = st43;
	
	st41.attack(ct42.getName());
	ct42.attack(st41.getName());
	st41.takeDamage(ct42.getAttackDamage());
	st41.beRepaired(5);
	st41.guardGate();

	return (0);
}
