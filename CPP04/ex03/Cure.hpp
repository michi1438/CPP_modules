/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:32:02 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 16:00:10 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Cure_hpp__
# define __Cure_hpp__

# include "AMateria.hpp"

class Cure : virtual public AMateria
{
	private:
		Cure&	operator= (const Cure& other);

	public:
					Cure(void);
					Cure(const Cure& other);
					~Cure(void);

		AMateria*		clone(void) const;
		void			use(ICharacter& target);
};

#endif // __Cure_hpp__
