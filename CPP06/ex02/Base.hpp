/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:44:59 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/06 00:52:30 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Base_hpp__
# define __Base_hpp__

# include <cstdlib>
# include <ctime>
# include <iostream>

class Base
{
	public:
		virtual			~Base(void);
		static Base *	generate(void);		
		static void		identify(Base* p);
		static void		identify(Base& p);
};

#endif
