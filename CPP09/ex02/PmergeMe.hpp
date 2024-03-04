/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:23:34 by mguerga           #+#    #+#             */
/*   Updated: 2024/03/04 16:19:24 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PmergeMe_hpp__
# define __PmergeMe_hpp__

# include <iostream>
# include <vector>
# include <deque>
# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <algorithm>
# include <sys/time.h>

class PmergeMe
{
	private :

	public :

		//atribute
		
		std::deque<unsigned int> deq;
		std::vector<unsigned int> vec;
		float	time_us;
		bool has_stray;
		unsigned int size;

		//cdco

		PmergeMe(int ac, char **av);
		~PmergeMe(void);
		PmergeMe(const PmergeMe& o);
		PmergeMe& operator= (const PmergeMe& o);

		//memberfunc

		void mi_sort(int status);

			//Vector mi_sort

			void vec_pairnswap();
			void recurs_ordering_pairs(std::vector<unsigned int> tmp);
			void binary_sort(std::vector<unsigned int> tmp);
			std::vector<unsigned int>::iterator recurse_bin_srt(std::vector<unsigned int> tmp, unsigned int needle, std::vector<unsigned int>::iterator it, std::vector<unsigned int>::iterator it_end);

			//List mi_sort
			
			void deq_pairnswap();
			void recurs_order_pairs_deq(std::deque<unsigned int> tmp);
			void binary_sort_deq(std::deque<unsigned int> tmp);
			std::deque<unsigned int>::iterator recurse_bin_srt_deq(std::deque<unsigned int> tmp, unsigned int needle, std::deque<unsigned int>::iterator it, std::deque<unsigned int>::iterator it_end);

		//Exceptions
		
		class ExceptWrongInput : public std::exception
		{
			public :
				const char *what() const throw ()
				{
					return ("Error: invalid argument characters must only be \"0123456789\"");
				}
		};
};

std::ostream& operator<< (std::ostream& os, const PmergeMe& o);

#endif
