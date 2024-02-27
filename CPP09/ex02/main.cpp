/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:04:55 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/27 15:27:17 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "Error: expects one argument at least..." << std::endl;
		return 1;
	}
	PmergeMe elem(av);
	std::cout << "Before: " << elem << std::endl;
	/*
	elem.mi_sort();
	std::cout << "After: " << elem.printcont() << std::endl;
	std::cout << "Time to process a range of " << elem.size << " elements with std::vector : " << elem.vec_time_ms << " us" << std::endl;
	std::cout << "Time to process a range of " << elem.size << " elements with std::list : " << elem.lst_time_ms << " us" << std::endl;
	
*/
	return 0;
}
	
