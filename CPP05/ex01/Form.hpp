/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:34:25 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/24 10:15:13 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Form_hpp__
# define __Form_hpp__

# include <iostream>
//# include "Bureaucrat.hpp" 

class	Bureaucrat;

class	Form
{
	private:
		const std::string	FName;
		bool				Signed;
		const int			SGrade;
		const int			EGrade;

	public:
						Form(void);
						Form(std::string name, int sgrade, int egrade);
						Form(const Form& o);
						~Form(void);
		
		Form&			operator= (const Form& o);

		std::string		getFName(void) const;
		int				getSGrade(void) const;
		int				getEGrade(void) const;
		bool			getSigned(void) const;
		void			beSigned(Bureaucrat b);

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

std::ostream& operator<<(std::ostream& os, const Form& other);

#endif
