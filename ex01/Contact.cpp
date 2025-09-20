#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
	return ;
}

void Contact::fillContact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

std::string Contact::getContactFirstName(void) const
{
	return (this->firstName);
}

std::string Contact::getContactLastName(void) const
{
	return (this->lastName);
}

std::string Contact::getContactNickName(void) const
{
	return (this->nickname);
}

std::string Contact::getContactFirstNameTrunc(void) const
{
	std::string str;

	str = this->firstName;
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

std::string Contact::getContactLastNameTrunc(void) const
{
	std::string str;

	str = this->lastName;
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

std::string Contact::getContactNickNameTrunc(void) const
{
	std::string str;

	str = this->nickname;
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
