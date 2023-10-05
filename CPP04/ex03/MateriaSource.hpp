/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:02:41 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 16:08:03 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MateriaSource_hpp__
# define __MateriaSource_hpp__

# include "IMateriaSource.hpp"

class	AMateria;

class	MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria*	slots[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		~MateriaSource(void);

		MateriaSource& operator= (const MateriaSource& other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif // __MateriaSource_hpp__
