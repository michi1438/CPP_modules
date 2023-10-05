/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:44:24 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 16:09:20 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Character_hpp__
# define __Character_hpp__

# include "ICharacter.hpp"

class	AMateria;

class	Character : virtual public ICharacter
{
	private:
		std::string	_Name;
		AMateria*	slots[4];
		Character(void);
	public:
		Character(std::string name);
		Character(const Character& other);
		~Character(void);
		//~ICharacter(void);
	
		Character&	operator= (const Character& other);
		const std::string& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif // __Character_hpp__
