#include "Account.hpp"
#include <ctime>
#include <iostream>

void Account::_displayTimestamp(void)
{
	char	timestr[20];

	std::time_t now;
	std::tm *local_tm;
	now = std::time(NULL);
	// current time in seconds since 01 Jan 1970
	local_tm = std::localtime(&now);
	// breaks seconds into date and time structure
	std::strftime(timestr, sizeof(timestr), "[%Y%m%d_%H%M%S]", local_tm);
	std::cout << timestr << " ";
}
// Constructors and destructors
Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	return ;
}
Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
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
	int	p_amount;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

/*
int Account::checkAmount(void) const
{
}

bool Account::makeWithdrawal(int withdrawal)
{

}
*/
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// Defining non member functions
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
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

// Initializing non member attributes
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;