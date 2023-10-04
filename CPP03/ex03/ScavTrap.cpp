// ScavTrap.cpp - ex01 - cpp03

#include "ScavTrap.hpp"

// cdc coplien

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called for " << name << " !" << std::endl; 
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap constructor called empty !" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap copy consturctor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->Name << " ScavTrap destructor called !" << std::endl; 
}

// operator

ScavTrap&	ScavTrap::operator= (const ScavTrap& other)
{
	std::cout << "ScavTrap Assignement operator called" << std::endl;

	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;

	return (*this);
}

// other member functions

int		ScavTrap::st_getEP(void)
{
	return (this->EnergyPoints);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << this->Name << " This Scav is too tired to attack (out of energy_points)" << std::endl;
		this->EnergyPoints = -1;
		return ;
	}
	std::cout << this->Name << " This Scav attacks " << target << " for " << this->AttackDamage << " points of damage." << std::endl;  
	this->EnergyPoints--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "The Scav named " << this->Name << " is assuming the \"GATE KEEPER\" stance." << std::endl;
}
