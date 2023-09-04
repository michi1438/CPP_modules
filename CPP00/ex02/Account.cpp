// Account.cpp

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 8;
int	Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

Account::~Account(void)
{
}

Account::Account(int initial_deposit)
{
	static int index = 0;
	
	_accountIndex = index++;
	this->makeDeposit(initial_deposit);	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	
}
void	Account::_displayTimestamp(void)
{
	std::cout << "[20230904_091532] "; 
}

void	Account::displayAccountsInfos()
{
	std::cout << "display Accounts info" << Account::getNbAccounts() << std::endl;
}

void	Account::displayStatus() const
{
	std::cout << "display status" << std::endl; 
}	

void	Account::makeDeposit(int deposit)
{
	_amount = deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_amount = withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}
