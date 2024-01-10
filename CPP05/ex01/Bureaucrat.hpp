/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:59:38 by mguerga           #+#    #+#             */
/*   Updated: 2024/01/10 18:43:15 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Bureaucrat_hpp__
# define __Bureaucrat_hpp__

# include <iostream>

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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif
