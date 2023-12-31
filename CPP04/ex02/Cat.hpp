/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:28:33 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 11:40:35 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Cat_hpp__
# define __Cat_hpp__

# include "Animal.hpp"

class	Cat : virtual public Animal
{
	private:
		Brain *cat_Brain;

		Cat&	operator= (const Cat& other);

	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);


		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif // __Cat_hpp__
