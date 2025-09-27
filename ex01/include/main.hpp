#ifndef MAIN_HPP
# define MAIN_HPP

# include <iomanip>
# include <iostream>
# include <string>

# define NUM_CONTACTS 8

class PhoneBook;

void	commandAdd(PhoneBook *phonebook0);
void	commandSearch(PhoneBook *phonebook0);
bool	is_only_digits(std::string inID);
#endif