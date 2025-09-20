#include "main.hpp"

/*
void	searchContact(PhoneBook *phonebook0, int index)
{
}
*/

void	displayPhonebook(PhoneBook *phonebook0)
{
	int	i;
	int	limit;

	i = 0;
	limit = phonebook0->getNumberOfContacts();
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (i < limit)
	{
		phonebook0->printContactByID(i);
		i++;
	}
	std::cout << "-------------------------------------------" << std::endl;
}

void	commandSearch(PhoneBook *phonebook0)
{
	displayPhonebook(phonebook0);

	std::cout << "Enter the index of the contact you want to see: ";
}