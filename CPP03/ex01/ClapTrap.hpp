/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:01:52 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/04 13:45:03 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ClapTrap_hpp__
# define __ClapTrap_hpp__

# include <iostream>

class	ClapTrap
{
	protected:
		std::string Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;

	public:
					ClapTrap(std::string name);
					ClapTrap(const ClapTrap& other);
					ClapTrap(void);
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
