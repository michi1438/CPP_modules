/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:16:01 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 18:00:53 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// cdc Coplien

MateriaSource::MateriaSource(void)
{
	int	i(0);

	while (i < 4)
	{
		this->slots[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{	
	*this = other;	
}

MateriaSource::~MateriaSource(void) 
{
	int	i(0);

	while (i < 4)
	{
		delete this->slots[i];
		i++;
	}
}

// operator

MateriaSource& MateriaSource::operator= (const MateriaSource& other)
{
	// delete this->slots;
	(void)other;
	return (*this);
}

// Member Func

void MateriaSource::learnMateria(AMateria* m)
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
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i(0);

	while (i < 4)
	{
		if (this->slots[i] != NULL && this->slots[i]->getType() == type)
		{
			return (this->slots[i]->clone());
		}
		i++;
	}
	std::cout << "last Materia \"" << type << "\" was not learned !" << std::endl;
	return (0);
}
