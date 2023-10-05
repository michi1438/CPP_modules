/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:15:53 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:15:56 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Dog_hpp__
# define __Dog_hpp__

# include "Animal.hpp"

class	Dog : virtual public Animal
{
	public:
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);

		Dog&	operator= (const Dog& other);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif // __Dog_hpp__
