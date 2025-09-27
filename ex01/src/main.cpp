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
1. check modify oldest contact
2. handle invalid SEARCH, no contact added before
3. Segmentation fault when changing details of contact -> done
*/