#include "main.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string command;
	PhoneBook phonebook0;

	while (1)
	{
		std::cout << "Enter a command : ADD, SEARCH or EXIT: ";
		if(!std::getline(std::cin, command))
			return (1);
		if (command == "ADD")
			commandAdd(&phonebook0);
		else if (command == "SEARCH")
			commandSearch(&phonebook0);
		else if (command == "EXIT")
			break ;
		else
			std::cout << std::endl;
	}
	return (0);
}

/*
Todo: 
1. check modify oldest contact -> done
2. handle invalid SEARCH, no contact added before -> done
3. Segmentation fault when changing details of contact -> done
4.0 reception of command: ctrl-d
4.1 when commandAdd, entering user input ctrl-d
4.2 when commandSearch, and entering index
5. memory leak
*/