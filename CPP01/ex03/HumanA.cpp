// HumanA.cpp

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string hname, Weapon w): name(hname), weap(w)
{
	//this->name = hname;
	//this->weap = w;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weap.getType() << std::endl;
}	

