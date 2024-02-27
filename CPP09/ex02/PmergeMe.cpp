/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:39:39 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/27 15:42:50 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//cdco

PmergeMe::PmergeMe(char **av)
{
	for (int i = 1; av[i] != NULL; i++)
	{
		lst.push_back(atoi(av[i]));
		vec.push_back(atoi(av[i]));
	}
	if (lst.size() == vec.size())
		size = lst.size();
	else
		std::cout << "Error: the containers size are not equal" << std::endl;
}


PmergeMe::~PmergeMe(void)
{}

PmergeMe::PmergeMe(const PmergeMe& o)
{
	*this = o;
}

PmergeMe& PmergeMe::operator= (const PmergeMe& o)
{
	this->lst = o.lst;
	this->vec = o.vec;

	return *this;
}

//member func

//Other

std::ostream& operator<<(std::ostream& os, const PmergeMe& o)
{
	std::vector<unsigned int>::const_iterator it_vec = o.vec.begin();
	std::list<unsigned int>::const_iterator it_lst = o.lst.begin();
	while (it_vec != o.vec.end() && it_lst != o.lst.end())
	{
		if (*it_vec != *it_lst)
		{
			os << "Error: the content of the containers is different..." << std::endl;
			return os;
		}
		os << *it_vec << ' ';
		it_vec++;
		it_lst++;
	}
	return os;
}
