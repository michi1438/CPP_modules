/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:13:16 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/05 10:07:24 by mguerga          ###   ########.fr       */
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
					Brain(const Brain& other);
					~Brain(void);

					Brain& operator= (const Brain& other);
};

#endif //__Brain_hpp__
