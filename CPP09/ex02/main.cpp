/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:04:55 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/03 09:53:40 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{

	timeval *tvb = new timeval;
	timeval *tva = new timeval;

	if (ac == 1)
	{
		std::cout << "Error: expects one argument at least..." << std::endl;
		return 1;
	}
	PmergeMe elem(ac, av);
	std::cout << "Before: " << elem << std::endl;
	gettimeofday(tvb, NULL);
	elem.mi_sort();
	gettimeofday(tva, NULL);
	std::cout << "After: " << elem << std::endl;
	std::vector<unsigned int>::iterator it = elem.vec.begin(); 
	elem.vec_time_us= (tva->tv_sec - tvb->tv_sec) * 1000000 + tva->tv_usec - tvb->tv_usec;
	while (it != elem.vec.end())
	{
		if (it != elem.vec.begin() && it < it - 1)
			std::cout << "XXXXXXXXXXXXX    container is NOT ordered   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
		it++;
	}
	if (elem.size != elem.vec.size())
			std::cout << "XXXXXXXXXXXXX    container is NOT of the right lengt   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
	std::cout << "Time to process a range of " << elem.size << " elements with std::vector : " << elem.vec_time_us << " us" << std::endl;
	/*
	std::cout << "Time to process a range of " << elem.size << " elements with std::list : " << elem.lst_time_ms << " us" << std::endl;
	
*/
	return 0;
}
	
