/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:04:55 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/05 22:47:44 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Data_hpp__
# define __Data_hpp__

# include <iostream>

class Data
{
	public:
		int Val;

		Data(int val);
		~Data(void);
		Data(const Data& o);
		Data& operator= (const Data& o);
};

#endif
