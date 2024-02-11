/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:50:24 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/11 12:28:33 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __easyfind_hpp__
# define __easyfind_hpp__

# include <iostream>
# include <vector> 
# include <algorithm> 
# include <list> 

template <typename T>
int easyfind(T &lst, int needle);

# include "easyfind.tpp"

#endif
