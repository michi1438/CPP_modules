// HumanB.cpp

#include "HumanB.hpp"

HumanB::HumanB(std::string hname): name(hname)
{
	weap = NULL;
}

void	HumanB::attack(void)
{
	if (weap == NULL)
		std::cout << this->name << " attacks with their " << this->weap << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}	

void	HumanB::setWeapon (Weapon w)
{
	this->weap = new Weapon(w);
}

HumanB::~HumanB(void) 
{
	weap->cleType();
	delete weap;
}
