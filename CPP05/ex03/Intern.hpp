/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:25:50 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 13:05:25 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Intern_hpp__
# define __Intern_hpp__

# include "AForm.hpp"

class	Intern
{
	public:
				Intern(void);
				~Intern(void);
				Intern(const Intern& other);
		
		Intern&	operator= (const Intern& other);

		AForm *	MakeForm(std::string form_name, std::string target_name);

		class	FormNotFoundException : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Form not Found.");
				}
		};
};

#endif
