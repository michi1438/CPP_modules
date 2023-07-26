// class contact.hpp 

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class C_Contact {
	public:
		std::string first_name, last_name, nickname, phone_number, darkest_secret;
		C_Contact (void);
		C_Contact (int);
};

C_Contact::C_Contact(int)
{
	std::cout << "passed\n";
	first_name = "\0";
	last_name = "\0";
	nickname = "\0";
	phone_number = "\0";
	darkest_secret = "\0";
}

C_Contact::C_Contact(void)
{
	std::cout << "Enter first_name:\n";
	std::cin >> first_name;
	std::cout << "Enter last_name:\n";
	std::cin >> last_name;
	std::cout << "Enter nickname:\n";
	std::cin >> nickname;
	std::cout << "Enter phone_number:\n";
	std::cin >> phone_number;
	std::cout << "Enter darkest_secret:\n";
	std::cin >> darkest_secret;
}
#endif
