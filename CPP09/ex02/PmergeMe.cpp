/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:39:39 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/03 20:21:07 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

typedef std::vector<unsigned int>::iterator Iterator_vec; 
typedef std::vector<unsigned int>::const_iterator Iterator_vec_c; 
typedef std::deque<unsigned int>::iterator Iterator_deq; 
typedef std::deque<unsigned int>::const_iterator Iterator_deq_c; 
//cdco

PmergeMe::PmergeMe(int ac, char **av)
{
	has_stray = (ac % 2 != 1);
	for (int i = 1; av[i] != NULL; i++)
	{
		deq.push_back(atoi(av[i]));
		vec.push_back(atoi(av[i]));
	}
	if (deq.size() == vec.size())
		size = deq.size();
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
	this->deq = o.deq;
	this->vec = o.vec;

	return *this;
}

//member func

void PmergeMe::mi_sort(int status)
{
	timeval *tvb = new timeval;
	timeval *tva = new timeval;

	gettimeofday(tvb, NULL);
	if (status == 0)
	{
		this->vec_pairnswap();

		std::vector<unsigned int> tmp;
		this->recurs_ordering_pairs(tmp);
		tmp.clear();
		this->binary_sort(tmp);
	}
	else
	{
		this->deq_pairnswap();
//		std::cout << *this << std::endl;
	}
	gettimeofday(tva, NULL);
	this->time_us = (((tva->tv_sec - tvb->tv_sec) * 1000000) + (tva->tv_usec - tvb->tv_usec));
	delete tva;
	delete tvb;
}

//List mi_sort
void PmergeMe::deq_pairnswap()
{
	Iterator_deq it = this->deq.begin();

	while (it < deq.end() - has_stray)
	{
		if (*it > *(it + 1))
			std::iter_swap(it, it + 1);
		it += 2;
	}
}

//Vector mi_sort
void PmergeMe::vec_pairnswap()
{
	Iterator_vec it = this->vec.begin();

	while (it < vec.end() - has_stray) 
	{
		if (*it > *(it + 1))
			std::iter_swap(it, it + 1);
		it += 2;
	}
}
			
void PmergeMe::recurs_ordering_pairs(std::vector<unsigned int> tmp)
{
	if (this->vec.empty() == true)
	{
		this->vec = tmp;
		return ;
	}
	else if (vec.size() != 1)
	{
		Iterator_vec max_val = std::max_element(vec.begin(), vec.end() - has_stray);
		tmp.insert(tmp.begin(), max_val - 1, max_val + 1);
		vec.erase(max_val - 1 , max_val + 1);	
	}
	else
	{
		tmp.push_back(*(vec.begin()));
		vec.erase(vec.begin());
	}
	this->PmergeMe::recurs_ordering_pairs(tmp);
}
	
void PmergeMe::binary_sort(std::vector<unsigned int> tmp)
{
	Iterator_vec it = vec.begin(); 
	int i = 0;
	while (it < vec.end())
	{
		if (i != 0 && i % 2 == 0)
		{
			tmp.push_back(*it);
			vec.erase(it);	
		}
		else
			it++;
		i++;
	}
//	std::cout << "vec = " << *this << std::endl << std::endl;
	while (tmp.empty() == false)
	{
		Iterator_vec it = vec.begin(); 
		Iterator_vec it_end = vec.end(); 
		this->recurse_bin_srt(tmp, tmp.back(), it, it_end);
		tmp.pop_back();	
	}
	
}

Iterator_vec PmergeMe::recurse_bin_srt(std::vector<unsigned int> tmp, unsigned int needle, Iterator_vec it, Iterator_vec it_end)
{
	int mid = (it_end - it) / 2;
	if (needle < it[mid])
	{
		if (it + mid == vec.begin() || needle >= it[mid - 1])
			return(vec.insert(it + mid, needle));
		else
			this->recurse_bin_srt(tmp, needle, it, it + mid); 
	}
	else if (needle > it[mid])
	{
		if (it + mid >= vec.end())
			return vec.insert(vec.end(), needle);
		else if (needle <= it[mid + 1] || *it == it[mid])
			return vec.insert(it + mid + 1, needle);
		else
			this->recurse_bin_srt(tmp, needle, it + mid, vec.end()); 
	}
	else
	{
		return vec.insert(it_end, needle);
	}
	return it;
}

//Other

std::ostream& operator<<(std::ostream& os, const PmergeMe& o)
{
	Iterator_vec_c it_vec = o.vec.begin();
	Iterator_deq_c it_deq = o.deq.begin();
	while (it_vec != o.vec.end() && it_deq != o.deq.end())
	{
		/*if (*it_vec != *it_lst)
		{
			os << "Error: the content of the containers is different..." << std::endl;
			return os;
		}
		*/
		os << *it_vec << ' ';
		it_vec++;
		it_deq++;
	}
	return os;
}
