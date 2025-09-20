#ifndef MAIN_HPP
# define MAIN_HPP

# include "PhoneBook.hpp"
# include <iomanip>
# include <iostream>
# include <string>

void	commandAdd(PhoneBook *phonebook0);
void	commandSearch(PhoneBook *phonebook0);
bool	is_only_digits(std::string inID);
#endif