#include "Account.hpp"
#include <iostream>

// Constructors and destructors
Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts += 1;
	return ;
}
Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	return ;
}
Account::Account(void)
{
	this->_amount = 0;
	return ;
}

// other functions

void Account::makeDeposit(int deposit)
{
}
bool Account::makeWithdrawal(int withdrawal)
{
}
int Account::checkAmount(void) const
{
}
void Account::displayStatus(void) const
{
}

// Initializing non member functions
int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
}

// Initializing non member attributes
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;