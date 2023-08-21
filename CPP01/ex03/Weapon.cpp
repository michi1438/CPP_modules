// Weapon.cpp

#include "Weapon.hpp"

Weapon::Weapon (std::string type)
{
	this->type = new std::string (type);
}

const std::string	Weapon::getType (void)
{
	return (*(this->type));
}

void	Weapon::setType (std::string ntype)
{
	delete this->type;
	this->type = new std::string (ntype);
}
