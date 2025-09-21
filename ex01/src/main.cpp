#include "main.hpp"

int	main(void)
{
	std::string command;
	PhoneBook phonebook0;

	while (1)
	{
		std::cout << "Enter a command : ADD, SEARCH or EXIT: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			commandAdd(&phonebook0);
		else if (command == "SEARCH")
			commandSearch(&phonebook0);
		else if (command == "EXIT")
			break ;
		else
			std::cout << std::endl;
	}
}

/*
Todo: 
> Debug searchContact
> add object folder, src, and include 
*/