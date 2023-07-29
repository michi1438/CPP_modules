// class PhoneBook.hpp

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP	

#include <string>
#include <iostream>
#include "Contact.hpp"

class C_PhoneBook {
	public:
		C_Contact repertoir[8];
		C_PhoneBook (void);
		C_PhoneBook (int);
		void	add_index(int);
		int	print_phonebook(int);
};
	
void	C_PhoneBook::add_index(int i)
{
	std::cout << "Enter first_name: ";
	std::cin >> repertoir[i].first_name;
	std::cout << "Enter last_name: ";
	std::cin >> repertoir[i].last_name;
	std::cout << "Enter nickname: ";
	std::cin >> repertoir[i].nickname;
	std::cout << "Enter phone_number: ";
	std::cin >> repertoir[i].phone_number;
	std::cout << "Enter darkest_secret: ";
	std::cin >> repertoir[i].darkest_secret;
	i++;
}

C_PhoneBook::C_PhoneBook(int)
{
;
}

int	C_PhoneBook::print_phonebook(int i)
{
	int	y (0);

	while(y < 8)
	{
		if (repertoir[i].first_name != "\0")
		{
			std::cout << repertoir[i].first_name << " | ";
			std::cout << repertoir[i].last_name << " | ";
			std::cout << repertoir[i].nickname << " | ";
			std::cout << repertoir[i].phone_number << " | ";
			std::cout << repertoir[i].darkest_secret << " | ";
			std::cout << std::endl;
		}
		if (i != 0)
			i--;
		else
			i = 7;
		y++;
	}

	return (0);
}

#endif
