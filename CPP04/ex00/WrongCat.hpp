/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:28:33 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 11:38:29 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongCat_hpp__
# define __WrongCat_hpp__

# include "WrongAnimal.hpp"

class	WrongCat : virtual public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif // __WrongCat_hpp__
