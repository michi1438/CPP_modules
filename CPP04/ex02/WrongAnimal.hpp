/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:34:49 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 11:56:59 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongAnimal_hpp__
# define __WrongAnimal_hpp__

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string type;
	public:
							WrongAnimal(void);	
		virtual				~WrongAnimal(void);
		virtual std::string getType(void) const;
		virtual void		makeSound(void) const;
};

#endif // __WrongAnimal_hpp__
