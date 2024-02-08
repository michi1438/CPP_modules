/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:54:37 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/08 17:37:16 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	int * a = new int();

	std::cout << *a << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	// WHY ??????

	Array <std::string>empty_strings;
	Array <std::string>strings(5);

	strings[0] = "hello";
	strings[1] = "world";
	strings[2] = "vertical";

	std::cout << "empty_strings.size() = " << empty_strings.size() << std::endl;
	//std::cout << empty_strings[0] << std::endl;
	//This is technicaly accessing an out of bound index...

	std::cout << std::endl;
	{
	int i = 0;

	while (i < static_cast<int>(strings.size()))
		std::cout << strings[i++] << std::endl;
	}

	Array <int>arr(5);
	Array <int>brr(arr);
	Array <int>crr = brr;

	arr[0] = 1;
	brr[0] = 2;
	brr[3] = 2;

	std::cout << "arr.size() = " << arr.size() << std::endl;
	std::cout << "brr.size() = " << brr.size() << std::endl;
	std::cout << "crr.size() = " << crr.size() << std::endl;
	std::cout << std::endl;
	std::cout << "arr[0] = " << arr[0] << std::endl;
	std::cout << "brr[0] = " << brr[0] << std::endl;
	std::cout << "crr[9] = " << crr[9] << std::endl;
	delete a;
}
