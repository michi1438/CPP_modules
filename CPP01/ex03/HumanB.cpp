// HumanB.cpp

#include "HumanB.hpp"

HumanB::HumanB(std::string hname): name(hname)
{
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weap.getType() << std::endl;
}	

void	HumanB::setWeapon (Weapon w)
{
	this->weap = w;
}

void	HumanB::setType(std::string nweap)
{
	weap.setType(nweap);
}

HumanB::~HumanB(void) 
{
	weap.cleType ();
}
