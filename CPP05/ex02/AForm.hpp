/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:34:25 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/29 16:25:59 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AForm_hpp__
# define __AForm_hpp__

# include <iostream>
//# include "Bureaucrat.hpp" 

class	Bureaucrat;

class	AForm
{
	private:
		std::string		FName;
		bool			Signed;
		int				SGrade;
		int				EGrade;

	public:
						AForm(void);
						AForm(std::string target);
						AForm(const AForm& o);
		virtual			~AForm(void);
		
		AForm&			operator= (const AForm& o);

		std::string		getFName(void) const;
		int				getSGrade(void) const;
		int				getEGrade(void) const;
		bool			getSigned(void) const;
		void			setFName(std::string);
		void			setSGrade(int);
		void			setEGrade(int);
		void			setSigned(bool);
		void			beSigned(Bureaucrat b);
		virtual void	action(void) const = 0;
		int				execute(Bureaucrat const & executor) const; 

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

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif
