/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:33:43 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/02 16:42:30 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMateria_hpp__
# define __AMateria_hpp__

# include <iostream>

class AMateria
{
	protected:

	public:
							AMateria(std::string const & type);
		const std::string & getType() const;

}
