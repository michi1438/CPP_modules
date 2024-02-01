/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:34:25 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/01 10:44:10 by mguerga          ###   ########.fr       */
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
		std::string		Target;

	public:
						AForm(void);
						AForm(std::string target);
						AForm(const AForm& o);
						~AForm(void);
		AForm&			operator= (const AForm& o);

		std::string		getFName(void) const;
		int				getSGrade(void) const;
		int				getEGrade(void) const;
		bool			getSigned(void) const;
		std::string		getTarget(void) const;
		void			setFName(std::string);
		void			setSGrade(int);
		void			setEGrade(int);
		void			setSigned(bool);
		void			setTarget(std::string);

		void			beSigned(Bureaucrat b);
		int				execute(Bureaucrat const & executor) const; 

		virtual void	action(void) const = 0;

		class			GradeToHighException : public std::exception 
		{
			public:
//throw(): This is an exception specification. It is used to declare the set of exceptions that a function can throw. In this case, throw() specifies that the function does not throw any exceptions. This is sometimes referred to as an empty exception specification.
				const char *what() const throw ()
				{
					return ("Grade too High.");
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
		class			FormNotSigned : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Form was not Signed.");
				}
		};
		
};

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif
