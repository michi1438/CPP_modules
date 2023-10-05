/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:33:43 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 18:17:08 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMateria_hpp__
# define __AMateria_hpp__

# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class AMateria
{
	protected:
		std::string			type;	
		
	public:
							AMateria(void);
							AMateria(std::string const & type);
							AMateria(const AMateria& other);
		virtual				~AMateria(void);

		AMateria&			operator= (const AMateria& other);

		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif // __AMateria_hpp__
