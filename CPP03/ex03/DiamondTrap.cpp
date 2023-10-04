// DiamondTrap.cpp - ex03 - cpp03

#include "DiamondTrap.hpp"

// cdc coplien

DiamondTrap::DiamondTrap(std::string _name)
{
	std::cout << "DiamondTrap constructor called for " << _name << " !" << std::endl;
	this->name = _name;
	this->Name = _name.append("_clap_name");
	this->HitPoints = ft_getHP();
	this->EnergyPoints = st_getEP();
	this->AttackDamage = ft_getatt();
}

DiamondTrap::DiamondTrap(void) {}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << this->name << "DiamondTrap Copy constructor called !" << std::endl; 
	*this = other;
}

// operator

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& other)
{
	std::cout << this->name << "DiamondTrap assignement operator called !" << std::endl; 

	this->name = other.name;
	this->Name = other.Name; 
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;

	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->name << " DiamondTrap destructor called !" << std::endl; 
}

// Member functions

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->name << ", but my ClapTrap name is " << this->Name << "." << std::endl;
}
