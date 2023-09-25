//Dog.cpp - ex00 -cpp04

#include "Dog.hpp"

//Coplien cdc
Dog::Dog(void)
{
	std::cout << "Dog Constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}
	
//Member Functions
std::string Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Wooff !!" << std::endl;
}

