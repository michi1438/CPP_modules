/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:56:48 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/29 18:56:09 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PresidentialPardonForm_hpp__
# define __PresidentialPardonForm_hpp__

# include "AForm.hpp"

class	Bureaucrat;

class	PresidentialPardonForm : virtual public AForm
{
	private:

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);

		void action(void) const;
};

#endif


