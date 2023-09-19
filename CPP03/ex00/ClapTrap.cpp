// ClapTrap.cpp - ex00 - Cpp03

#include "ClapTrap.hpp"


// cdc coplien
ClapTrap::ClapTrap(std::string name)
{
	this->Name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->Name << " destructor called !" << std::endl;
}

// other member functions
void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << this->Name << " is too tired to attack (out of energy_points)" << std::endl;
		this->EnergyPoints = -1;
		return ;
	}
	std::cout << this->Name << " attacks " << target << " for " << this->AttackDamage << " points of damage !" << std::endl;  
	this->EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->HitPoints -= amount;
	std::cout << this->Name << " has received " << amount << " points of damage !" << std::endl;  
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->HitPoints += amount;
	this->EnergyPoints--;
	std::cout << this->Name << " has repaired itself for " << amount << " HitPoints !" << std::endl;
}

// accessors
std::string	ClapTrap::getName(void)
{
	return (this->Name);
}

int	ClapTrap::getEnergyPoints(void)
{
	return (this->EnergyPoints);
}

int	ClapTrap::getAttackDamage(void)
{
	return (this->AttackDamage);
}
