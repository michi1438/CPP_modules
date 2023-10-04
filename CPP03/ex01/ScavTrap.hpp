/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:04:42 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/04 16:30:51 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ScavTrap_hpp__
# define __ScavTrap_hpp__

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
					ScavTrap(std::string name);
					ScavTrap(void);
					ScavTrap(const ScavTrap& other);
					~ScavTrap(void);

		ScavTrap&	operator= (const ScavTrap& other);

		void		attack(const std::string& target);	
		void		guardGate(void);
};

#endif // __ScavTrap_hpp__
