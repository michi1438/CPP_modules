/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:38:56 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/04 16:32:15 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ClapTrap_hpp__
# define __ClapTrap_hpp__

# include <iostream>

class	ClapTrap
{
	private:
		std::string Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;

	public:
					ClapTrap(std::string name);
					ClapTrap(void);
					ClapTrap(const ClapTrap& other);
					~ClapTrap(void);

					ClapTrap& operator= (const ClapTrap& other);

		int			getAttackDamage(void);
		int			getEnergyPoints(void);
		std::string	getName(void);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif //__ClapTrap_hpp__
