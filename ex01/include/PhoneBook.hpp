#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook
{
  private:
	Contact Contacts[8]; //change to 7 

  public:
	int id_Contact;
	bool full;
	PhoneBook(void);
	~PhoneBook(void);
	
	void addContact(std::string firstName, std::string lastName,
		std::string nickName, std::string phoneNumber,
		std::string darkestSecret);
	int getNumberOfContacts(void) const;
	void printContactByID(int id) const;
	void printAllInfoContact(int id) const;
};

#endif