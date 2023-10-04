/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:33:03 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/04 15:33:05 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ClapTrap	ct43(ct42);
	ClapTrap	ct44 = ct43;

	Hit(&ct41, &ct42);
	Hit(&ct41, &ct42);
	Hit(&ct41, &ct42);
	Hit(&ct42, &ct41);
	ct42.beRepaired(5);

	return (0);
}
