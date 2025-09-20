#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact(void);
	~Contact(void);
	void fillContact(std::string firstName, std::string lastName,
		std::string nickName, std::string phoneNumber,
		std::string darkestSecret);
	std::string getContactFirstName(void) const;
	std::string getContactLastName(void) const;
	std::string getContactNickName(void) const;
	std::string getContactFirstNameTrunc(void) const;
	std::string getContactLastNameTrunc(void) const;
	std::string getContactNickNameTrunc(void) const;
};
#endif