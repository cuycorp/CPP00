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
	if (this->id_Contact == 2) // change to 7
	{
		this->Contacts[0].fillContact(firstName, lastName, nickName,
			phoneNumber, darkestSecret);
		this->full = true;
		this->id_Contact = 1;
	}
	else
	{
		this->Contacts[this->id_Contact].fillContact(firstName, lastName,
			nickName, phoneNumber, darkestSecret);
		this->id_Contact++;
	}
	std::cout << "Inside PhoneBook::addContact attribute this->id_Contact" << this->id_Contact << std::endl;
}

int PhoneBook::getNumberOfContacts(void) const
{
	int limit;

	if (this->full == true)
		limit = 2; // change to 7
	else
		limit = this->id_Contact;
	return (limit);
}

void PhoneBook::printContactByID(int id) const
{
	std::cout << std::setw(10) << id << "|";
	std::cout << std::setw(10) << this->Contacts[id].getContactFirstNameTrunc() << "|";
	std::cout << std::setw(10) << this->Contacts[id].getContactLastNameTrunc() << "|";
	std::cout << std::setw(10) << this->Contacts[id].getContactNickNameTrunc() << std::endl;
}

void PhoneBook::printAllInfoContact(int id) const
{
	std::cout << "First name: " << this->Contacts[id].getContactFirstName() << std::endl;
	std::cout << "Last name: " << this->Contacts[id].getContactLastName() << std::endl;
	std::cout << "Nickname: " << this->Contacts[id].getContactNickName() << std::endl;
	std::cout << "Phone number: " << this->Contacts[id].getContactPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->Contacts[id].getContactDarkestSecret() << std::endl;
}