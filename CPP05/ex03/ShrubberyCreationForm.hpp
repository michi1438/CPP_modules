/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:33:08 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 12:56:03 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ShrubberyCreationForm_hpp__
# define __ShrubberyCreationForm_hpp__ 

# include "AForm.hpp"

class ShrubberyCreationForm: virtual public AForm
{
	private:

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(std::string form_name, std::string target);
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);

		void action(void) const;
};

#endif
