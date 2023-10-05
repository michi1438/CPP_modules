/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:34:49 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:36:24 by mguerga          ###   ########.fr       */
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
							WrongAnimal(const WrongAnimal& other);
		virtual				~WrongAnimal(void);

		virtual				WrongAnimal& operator= (const WrongAnimal& other);

		virtual std::string getType(void) const;
		void		makeSound(void) const;
};

#endif // __WrongAnimal_hpp__
