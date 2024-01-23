/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:34:25 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/23 13:07:30 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Form_hpp__
# define __Form_hpp__

# include "Bureaucrat.hpp"
# include <iostream>

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
		class			GradeToHighException{};
		class			GradeToLowException{};
		void			beSigned(Bureaucrat b);
		
};

std::ostream& operator<<(std::ostream& os, const Form& other);

#endif
