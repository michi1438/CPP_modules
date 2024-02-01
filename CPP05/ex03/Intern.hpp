/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:25:50 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/30 12:39:09 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Intern_hpp__
# define __Intern_hpp__

# include "Aform.hpp"

class	Intern
{
	private:

	public:
				Intern(void);
				~Intern(void);
				Intern(const &Intern);
		
		Intern&	operator= (const Intern& other);

		AForm&	makeForm(std::string form_name, std::string target_name);
};

#endif
