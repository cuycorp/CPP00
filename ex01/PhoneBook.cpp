#include "main.hpp"

PhoneBook::PhoneBook(void)
{
	this->id_Contact = 0;
	this->full = false;
	std::cout << "Phonebook created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook destroyed" << std::endl;
	return ;
}

void PhoneBook::addContact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->Contacts[this->id_Contact].fillContact(firstName, lastName, nickName,
		phoneNumber, darkestSecret);
	if (this->id_Contact == 7)
	{
		this->full = true;
		this->id_Contact = 0;
	}
	else
		this->id_Contact++;
}

int PhoneBook::getNumberOfContacts(void) const
{
	int limit;

	if (this->full == true)
		limit = 8;
	else
		limit = this->id_Contact;
	return (limit);
}

void PhoneBook::printContactByID(int id)
{
	std::cout << std::setw(10) << id << "|";
	std::cout << std::setw(10) << this->Contacts[id].getContactFirstNameTrunc() << "|";
	std::cout << std::setw(10) << this->Contacts[id].getContactLastNameTrunc() << "|";
	std::cout << std::setw(10) << this->Contacts[id].getContactNickNameTrunc() << std::endl;
}
