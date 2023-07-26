// class PhoneBook.hpp

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP	

#include <string>
#include <iostream>
#include "Contact.hpp"

class C_PhoneBook {
	private:
		C_Contact	*repertoir;
	public:
		C_PhoneBook (void);
		int	add_to_phonebook(void);
		int	print_phonebook(void);
};
	
C_PhoneBook::C_PhoneBook(void)
{
	C_Contact cont; 
	repertoir = &cont; 
}

int	C_PhoneBook::print_phonebook(void)
{
	std::cout << repertoir->first_name; 
	return (0);
}

#endif
