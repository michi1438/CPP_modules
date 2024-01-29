/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:59:38 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/29 16:55:47 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Bureaucrat_hpp__
# define __Bureaucrat_hpp__

# include <iostream>
# include "AForm.hpp"

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
		void			signForm(AForm &f) const;
		void			executeForm(AForm const & f) const;	
		
		class			GradeToHighException : public std::exception 
		{
			public:
				const char *what() const throw ()
				{
					return ("Grade too high.");
				}
		};
		class			GradeToLowException : public std::exception 
		{
			public:
				const char *what() const throw ()
				{
					return ("Grade too Low.");
				}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif
