/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:59:38 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/23 13:19:54 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Bureaucrat_hpp__
# define __Bureaucrat_hpp__

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;

	public:
						Bureaucrat(void);
						Bureaucrat(std::string name, int grade);
						Bureaucrat(const Bureaucrat& other);
						~Bureaucrat(void);

		Bureaucrat&		operator= (const Bureaucrat& other);
		
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			increment(void);
		void			decrement(void);
		class			GradeToHighException{};
		class			GradeToLowException{};
		void			signForm(Form f);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif
