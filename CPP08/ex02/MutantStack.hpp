/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:10:12 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/12 15:26:47 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MutantStack_hpp__
# define __MutantStack_hpp__

//# include <vector>
# include <stack>
# include <list>
# include <algorithm>
# include <iostream>

//Why container = std::deque and not vector or list ??
template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:

	//	typedef typename Container::const_iterator const_iterator;
		typedef typename Container::iterator iterator;
		# include "MutantStack.tpp"

	/*	
		long num;
		class iterator : public std::iterator<std::output_iterator_tag, long, long, const long*, long>
		{
			private:
				long num;
			public:
				iterator(long _num) : num(_num) {}
				iterator& operator++() { num = num + 1; return *this;}
				iterator operator++(int) { iterator retval = *this; ++(*this); return retval;}
				iterator& operator--() { num -= 1; return *this;}
				bool operator==(iterator other) const {return num == other.num;}
				bool operator!=(iterator other) const {return !(num == other.num);}
				T operator*() const { return num; }
		};
	*/
};


#endif
