#include "PhoneBook.hpp"
#include "main.hpp"
#include <cstdlib>
#include <ios>
#include <limits>

std::string InputFillField(std::string field)
{
	std::string textfield;
	while (1)
	{
		std::cout << "Enter " << field << ": ";
		if (std::getline(std::cin, textfield))
		{
			if (!textfield.empty())
				return (textfield);
			std::cout << "Field cannot be empty." << std::endl;
		}
		else
		{
			if(std::cin.eof())
			{
				std::cout << "EOF detected, exiting awesomePhonebook" << std::endl;
				//exit(1);
			}
			std::cin.clear();
			return ("");
			//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//std::cout << "Input error. Try again" << std::endl;
		}
	}
}

void	commandAdd(PhoneBook *phonebook0)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	firstName = InputFillField("first name");
	if (firstName.empty())
		return ;
	lastName = InputFillField("last name");
	if (lastName.empty())
		return ;
	nickName = InputFillField("nickname");
	if (nickName.empty())
		return ;
	phoneNumber = InputFillField("phone number");
	if (phoneNumber.empty())
		return ;
	darkestSecret = InputFillField("darkest secret");
	if (darkestSecret.empty())
		return ;
	(*phonebook0).addContact(firstName, lastName, nickName, phoneNumber,
		darkestSecret);
}
