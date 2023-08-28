// Weapon.cpp

#include "Weapon.hpp"

Weapon::Weapon (std::string type)
{
	this->type = new std::string (type);
}

Weapon::Weapon () 
{
}

Weapon::~Weapon ()
{
}

const std::string	Weapon::getType (void)
{
	return (*(this->type));
}

void	Weapon::setType (std::string ntype)
{
	Weapon::cleType ();
	this->type = new std::string (ntype);
}

void	Weapon::cleType (void)
{
	delete this->type;
}
