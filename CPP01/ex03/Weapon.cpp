// Weapon.cpp

#include "Weapon.hpp"

Weapon::Weapon (std::string type)
{
	this->type = new std::string (type);
}

Weapon::Weapon () 
{
	this->type = NULL; 
}

Weapon::~Weapon ()
{
}

const std::string&	Weapon::getType (void)
{
	return (*type);
}

void	Weapon::setType (std::string ntype)
{
	//Weapon::cleType ();
	this->type->swap(ntype);
}

void	Weapon::cleType (void)
{
	delete this->type;
}
