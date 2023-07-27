// class PhoneBook.hpp

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP	

#include <string>
#include <iostream>
#include "Contact.hpp"

class C_PhoneBook {
	public:
		C_Contact repertoir;
		C_PhoneBook (void);
		C_PhoneBook (int);
		int	add_to_phonebook(void);
		int	print_phonebook(void);
};
	
C_PhoneBook::C_PhoneBook(void)
{
	std::cout << "Enter first_name:\n";
	std::cin >> repertoir.first_name;
	std::cout << "Enter last_name:\n";
	std::cin >> repertoir.last_name;
	std::cout << "Enter nickname:\n";
	std::cin >> repertoir.nickname;
	std::cout << "Enter phone_number:\n";
	std::cin >> repertoir.phone_number;
	std::cout << "Enter darkest_secret:\n";
	std::cin >> repertoir.darkest_secret;
	std::cout << repertoir.first_name << std::endl;
}

C_PhoneBook::C_PhoneBook(int)
{
;
}

int	C_PhoneBook::print_phonebook(void)
{
	std::cout << repertoir.first_name << std::endl;
	return (0);
}

#endif
