/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:06:37 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/06 18:15:51 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __whatever_hpp__
# define __whatever_hpp__

# include <iostream>

template <typename T>
T max(T x, T y)
{
	return (x > y) ? x : y;
}

template <typename T>
T min(T x, T y)
{
	return (x < y) ? x : y;
}

template <typename T>
void swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

#endif
