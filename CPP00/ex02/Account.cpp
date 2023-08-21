// Account.cpp

#include <iostream>
#include "Account.hpp"

int	Account::getNbAccounts()
{
	return (8);
}

void	Account::displayAccountsInfos()
{
	std::cout << Account::getNbAccounts(); 
}

void	displayStatus( void ) const
{
	
