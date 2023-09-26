/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:00:34 by mguerga           #+#    #+#             */
/*   Updated: 2023/09/25 18:20:47 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#define ARR_SIZE 20

int	main(void)
{
	int i(0);
	const Animal* meta = new Animal;
	const Animal* horde[ARR_SIZE];
	
	while (i < ARR_SIZE)
	{
		if (i % 2 == 0)
			horde[i] = new Cat;
		else
			horde[i] = new Dog;
		i++;
	}
	i = 0;
	while (i < ARR_SIZE) 
	{
		delete horde[i];
		i++;
	}

	return (0);
}
