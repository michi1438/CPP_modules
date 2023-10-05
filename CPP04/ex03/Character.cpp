/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:49 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 18:43:16 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// cdc Coplien

Character::Character(void) {}

Character::Character(std::string name)
{
	int	i(0);

	this->_Name = name;
	while (i < 4)
	{
		this->slots[i] = NULL;
		i++;
	}
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character(void)
{
	int	i(0);

	while (i < 4)
	{
		delete this->slots[i];
		i++;
	}
}

//operator

Character& Character::operator= (const Character& other)
{
	this->_Name = other._Name;
	return (*this);
}	

// member function 

const std::string& Character::getName(void) const
{
	return (this->_Name);
}

void	Character::equip(AMateria* m)
{
	int i(0);

	while (i < 4)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m;
			return ;
		}
		i++;
	}
	std::cout << "last Materia \"" << this->_Name << "\" tried to equip was put to the ground, there are no available slots!" << std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	delete this->slots[idx];
	this->slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->slots[idx] != NULL)
	{
		this->slots[idx]->use(target);
		this->unequip(idx);
	}
	else
		std::cout << "slot " << idx << " is empty !" << std::endl;
}
