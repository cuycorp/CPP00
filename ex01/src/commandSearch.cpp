#include "PhoneBook.hpp"
#include "main.hpp"
#include <cstdlib>

int	getIdFromUser(PhoneBook *phonebook0)
{
	int	maxId;
	int	id;

	std::string inID;
	maxId = phonebook0->getNumberOfContacts();
	while (1)
	{
		std::cout << "Enter the index of the contact you want to see: ";
		std::getline(std::cin, inID);
		if (is_only_digits(inID))
		{
			id = atoi(inID.c_str());
			if (id >= 0 && id < maxId)
				break ;
		}
		std::cout << "Enter valid index" << std::endl;
	}
	return (id);
}

void	searchContact(PhoneBook *phonebook0)
{
	int	id;

	if (phonebook0->getNumberOfContacts() == 0)
	{
		std::cout << "Add a contact first" << std::endl;
		return ;
	}
	id = getIdFromUser(phonebook0);
	phonebook0->printAllInfoContact(id);
}

void	displayPhonebook(PhoneBook *phonebook0)
{
	int	i;
	int	limit;

	i = 0;
	limit = phonebook0->getNumberOfContacts();
	std::cout << "displayPhonebook subfunction of commandSearch, variable limit:" << limit << std::endl;
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
	searchContact(phonebook0);
}
