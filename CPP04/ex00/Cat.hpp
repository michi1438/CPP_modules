/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:28:33 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 09:12:16 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Cat_hpp__
# define __Cat_hpp__

# include "Animal.hpp"

class	Cat : virtual public Animal
{
	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);

		Cat&	operator= (const Cat& other);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif // __Cat_hpp__
