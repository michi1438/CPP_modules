// FragTrap.cpp - ex02 - cpp03

#include "FragTrap.hpp"

// cdc coplien

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor called for " << name << " !" << std::endl; 
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap constructor called empty !" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "FragTrap copy consturctor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->Name << " FragTrap destructor called !" << std::endl; 
}

// operator

FragTrap&	FragTrap::operator= (const FragTrap& other)
{
	std::cout << "FragTrap Assignement operator called" << std::endl;

	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;

	return (*this);
}

// other member functions

void	FragTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << this->Name << " This Frag is too tired to attack (out of energy_points)" << std::endl;
		this->EnergyPoints = -1;
		return ;
	}
	std::cout << this->Name << " This Frag attacks " << target << " for " << this->AttackDamage << " points of damage." << std::endl;  
	this->EnergyPoints--;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "The Frag named " << this->Name << " says \"Gimme Five !\"." << std::endl;
}

// accessors

int		FragTrap::ft_getHP(void)
{
	return (this->HitPoints);
}

int		FragTrap::ft_getatt(void)
{
	return (this->AttackDamage);
}

