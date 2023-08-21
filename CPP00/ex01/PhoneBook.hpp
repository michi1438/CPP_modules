// class PhoneBook.hpp

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP	

#include "utils.hpp"

class C_PhoneBook {
		C_Contact repertoir[8];
	public:
		int		e[8];
		int		add_index(int);
		int		getline_wrapper(std::string *str, int i);
		int		print_phonebook(int);
		int		print_contact(int);
		void	choose_contact(std::string);
};

#endif
