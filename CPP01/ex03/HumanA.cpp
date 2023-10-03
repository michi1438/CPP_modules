// HumanA.cpp

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string hname, Weapon w): name(hname) 
{
	//this->name = hname;
	weap = new Weapon(w);
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}	

HumanA::~HumanA(void) 
{
	weap->cleType();
	delete weap;
}

