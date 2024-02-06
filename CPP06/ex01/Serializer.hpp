/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:35:07 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/05 22:12:05 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Serializer_hpp__
# define __Serializer_hpp__

# include "Data.hpp"
# include <stdint.h> 

class	Serializer
{
	public:
		virtual		~Serializer(void) = 0;
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
