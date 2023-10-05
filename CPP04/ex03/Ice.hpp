/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:19:30 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 16:00:24 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Ice_hpp__
# define __Ice_hpp__

# include "AMateria.hpp"

class Ice : virtual public AMateria
{
	private:
		Ice&	operator= (const Ice& other);

	public:
					Ice(void);
					Ice(const Ice& other);
					~Ice(void);

		AMateria*		clone(void) const;
		void			use(ICharacter& target);
};

#endif // __Ice_hpp__
