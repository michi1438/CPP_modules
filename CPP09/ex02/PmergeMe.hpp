/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:23:34 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/27 15:26:00 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PmergeMe_hpp__
# define __PmergeMe_hpp__

# include <iostream>
# include <vector>
# include <list>
# include <cstdlib>
# include <iostream>
# include <algorithm>

class PmergeMe
{
	private:

	public:
		std::list<unsigned int> lst;
		std::vector<unsigned int> vec;
		float	lst_time_ms;
		float	vec_time_ms;
		unsigned int size;

		//cdco
		PmergeMe(char **av);
		~PmergeMe(void);
		PmergeMe(const PmergeMe& o);
		PmergeMe& operator= (const PmergeMe& o);
		//memberfunc
};

std::ostream& operator<< (std::ostream& os, const PmergeMe& o);

#endif
