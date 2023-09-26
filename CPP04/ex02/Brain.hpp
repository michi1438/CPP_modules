/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:13:16 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 17:32:32 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Brain_hpp__
# define __Brain_hpp__

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
					Brain(void); 
					Brain(bool); 
					~Brain(void);
};

#endif //__Brain_hpp__
