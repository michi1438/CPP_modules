/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:39:39 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/04 16:19:37 by mguerga          ###   ########.fr       */
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
		std::string str = av[i];
		if (str.find_first_not_of("0123456789") != std::string::npos)
			throw ExceptWrongInput(); 	
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

		std::deque<unsigned int> tmp;
		this->recurs_order_pairs_deq(tmp);
		tmp.clear();
		this->binary_sort_deq(tmp);
	}
	gettimeofday(tva, NULL);
	this->time_us = (((tva->tv_sec - tvb->tv_sec) * 1000000) + (tva->tv_usec - tvb->tv_usec));
	delete tva;
	delete tvb;
}

//deque mi_sort

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

void PmergeMe::recurs_order_pairs_deq(std::deque<unsigned int> tmp)
{
	if (this->deq.empty() == true)
	{
		this->deq = tmp;
		return ;
	}
	else if (deq.size() != 1)
	{
		Iterator_deq max_val = std::max_element(deq.begin(), deq.end() - has_stray);
		tmp.insert(tmp.begin(), max_val - 1, max_val + 1);
		deq.erase(max_val - 1 , max_val + 1);	
	}
	else
	{
		tmp.push_back(*(deq.begin()));
		deq.erase(deq.begin());
	}
	this->PmergeMe::recurs_order_pairs_deq(tmp);
}

void PmergeMe::binary_sort_deq(std::deque<unsigned int> tmp)
{
	std::deque<unsigned int> tmp2;
	Iterator_deq it = deq.begin(); 
	int i = 0;
	while (it < deq.end())
	{
		if (i != 0 && i % 2 == 0)
			tmp.push_back(*it);	
		else
			tmp2.push_back(*it);	
		it++;
		i++;
	}
	deq.clear();
	deq = tmp2;
	while (tmp.empty() == false)
	{
		Iterator_deq it = deq.begin(); 
		Iterator_deq it_end = deq.end(); 
		this->recurse_bin_srt_deq(tmp, tmp.back(), it, it_end);
		tmp.pop_back();	
	}
	
}

Iterator_deq PmergeMe::recurse_bin_srt_deq(std::deque<unsigned int> tmp, unsigned int needle, Iterator_deq it, Iterator_deq it_end)
{
	int mid = (it_end - it) / 2;
	if (needle < it[mid])
	{
		if (it + mid == deq.begin() || needle >= it[mid - 1])
			return(deq.insert(it + mid, needle));
		else
			this->recurse_bin_srt_deq(tmp, needle, it, it + mid); 
	}
	else if (needle > it[mid])
	{
		if (it + mid >= deq.end())
			return deq.insert(deq.end(), needle);
		else if (needle <= it[mid + 1] || *it == it[mid])
			return deq.insert(it + mid + 1, needle);
		else
			this->recurse_bin_srt_deq(tmp, needle, it + mid, it_end); 
	}
	else
	{
		return deq.insert(it_end, needle);
	}
	return it;
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
			this->recurse_bin_srt(tmp, needle, it + mid, it_end); 
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
		os << *it_vec << ' '; 
		it_vec++;
		it_deq++;
	}
	return os;
}
