/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:50:07 by mguerga           #+#    #+#             */
/*   Updated: 2023/10/02 16:51:57 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	std::string	str;

	std::cin >> str;
	Zombie *horde (zombieHorde(5, str));
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
}
