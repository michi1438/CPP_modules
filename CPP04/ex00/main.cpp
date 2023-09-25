//main.cpp - ex00 - cpp04

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const	Animal* meta = new Animal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	const	WrongAnimal* x = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	x->makeSound();
	meta->makeSound();
	return (0);
}
