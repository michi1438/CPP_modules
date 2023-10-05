/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:19:01 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 10:01:17 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Animal_hpp__
# define __Animal_hpp__

# include <iostream>
# include "Brain.hpp"

class	Animal
{
	protected:
		std::string type;
	public:
							Animal(void);	
							Animal(const Animal& other);
		virtual				~Animal(void);

		virtual				Animal& operator= (const Animal& other);

		virtual std::string getType(void) const;
		virtual void		makeSound(void) const;
};

#endif // __Animal_hpp__
