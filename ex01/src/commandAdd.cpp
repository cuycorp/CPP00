#include "PhoneBook.hpp"
#include "main.hpp"

std::string InputFillField(std::string field)
{
	std::string textfield;
	while (1)
	{
		std::cout << "Enter " << field << ": ";
		std::getline(std::cin, textfield);
		if (!textfield.empty())
			return (textfield);
		std::cout << "Field cannot be empty." << std::endl;
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
	lastName = InputFillField("last name");
	nickName = InputFillField("nickname");
	phoneNumber = InputFillField("phone number");
	darkestSecret = InputFillField("darkest secret");
	(*phonebook0).addContact(firstName, lastName, nickName, phoneNumber,
		darkestSecret);
}
