/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:04:55 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/04 16:13:46 by mguerga          ###   ########.fr       */
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
	try
	{
		PmergeMe elem(ac, av);

		std::cout << "Before: " << elem << std::endl;
		elem.mi_sort(0);
		std::cout.setf(std::ios::fixed, std::ios::floatfield);
		std::cout << "After: " << elem << std::endl;
		std::cout << "Time to process a range of " << elem.size << " elements with std::vector : " << elem.time_us / 1000000 << " s" << std::endl;
		elem.mi_sort(1);
		std::cout << "Time to process a range of " << elem.size << " elements with std::deque : " << elem.time_us / 1000000 << " s" << std::endl;

		//	checks
		std::vector<unsigned int>::iterator it = elem.vec.begin(); 
		std::deque<unsigned int>::iterator it_deq = elem.deq.begin(); 
		while (it != elem.vec.end() && it_deq != elem.deq.end())
		{
			if (it != elem.vec.begin() && (*it < *(it - 1) || *it_deq != *it))
				std::cout << "XXXXXXXXXXXXX    container is NOT ordered   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
			it++;
			it_deq++;
		}
		if (elem.size != elem.vec.size() || elem.size != elem.deq.size())
				std::cout << "XXXXXXXXXXXXX    container is NOT of the right length   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}
	
