/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:34:25 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/10 19:12:31 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Form_hpp__
# define __Form_hpp__

# include <iostream>

class	Form
{
	private:
		const std::string	FName;
		bool				Signed = false;
		const int			SGrade;
		const int			EGrade;

	public:
						Form(void);
						Form(std::string name, int sgrade, int egrade);
						Form(const Form& other);
						~Form(void);
		
		Form&			operator= (const Form& other);

		std::string		getFName(void) const;
		int				getSGrade(void) const;
		int				getEGrade(void) const;
		bool			getSigned(void) const;
		class			GradeToHighException{};
		class			GradeToLowException{};
		
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif
