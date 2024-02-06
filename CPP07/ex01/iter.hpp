/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:30:44 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/06 19:05:52 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __iter_hpp__
# define __iter_hpp__
# include <iostream>

template <typename T>
void func (T& val)
{
	val += val;
	std::cout << val << std::endl;
}

template <typename T>
void	iter(T *arr, int size, void (*func)(T&))
{
	int i = 0;

	while (i < size)
	{
		func(arr[i]);
		i++;
	}
}

#endif
