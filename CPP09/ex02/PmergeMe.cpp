/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:39:39 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/03 09:21:05 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

typedef std::vector<unsigned int>::iterator Iterator_vec; 
typedef std::vector<unsigned int>::const_iterator Iterator_vec_c; 
typedef std::list<unsigned int>::iterator Iterator_lst; 
typedef std::list<unsigned int>::const_iterator Iterator_lst_c; 
//cdco

PmergeMe::PmergeMe(int ac, char **av)
{
	has_stray = (ac % 2 != 1);
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
//		std::cout << *this << std::endl;
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
			this->recurse_bin_srt(tmp, needle, it, vec.begin() + mid); 
	}
	else if (needle > it[mid])
	{
		if (it + mid == vec.end() || needle <= it[mid + 1])
			return vec.insert(it + mid + 1, needle);
		else if (vec.begin() + mid > it_end) // Why the fuck ???
			this->recurse_bin_srt(tmp, needle, vec.begin() + mid, it_end); 
		else
			return vec.insert(it + mid + 1, needle);
	}
	else
		return vec.insert(it_end, needle);
//		std::cout << "needle = mid " << it[mid] << " needle = " << needle << std::endl;
	return it;
}

void PmergeMe::mi_sort()
{
	this->vec_pairnswap();

	std::vector<unsigned int> tmp;
	this->recurs_ordering_pairs(tmp);
	tmp.clear();
	//std::cout << *this << std::endl;
	this->binary_sort(tmp);
}
//Other

std::ostream& operator<<(std::ostream& os, const PmergeMe& o)
{
	Iterator_vec_c it_vec = o.vec.begin();
	std::list<unsigned int>::const_iterator it_lst = o.lst.begin();
	while (it_vec != o.vec.end() && it_lst != o.lst.end())
	{
		/*if (*it_vec != *it_lst)
		{
			os << "Error: the content of the containers is different..." << std::endl;
			return os;
		}
*/
		os << *it_vec << ' ';
		it_vec++;
		it_lst++;
	}
	return os;
}
