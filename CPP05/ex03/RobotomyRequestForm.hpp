/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:00:24 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 12:58:57 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RobotomyRequestForm_hpp__
# define __RobotomyRequestForm_hpp__

# include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm
{
	private:

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(std::string form_name, std::string target);
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);

		void action(void) const;
};

#endif
