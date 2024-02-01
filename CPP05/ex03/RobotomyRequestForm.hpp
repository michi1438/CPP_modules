/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:00:24 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/29 19:04:06 by mguerga          ###   ########.fr       */
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
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);

		void action(void) const;
};

#endif
