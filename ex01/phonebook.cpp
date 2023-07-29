// phonebook.cpp main stuff

#include <iostream>
#include <string>
#include <cstring>
#include "PhoneBook.hpp"

int	main()
{
	int	i (0);
	std::string add ("ADD");
	std::string search ("SEARCH");
	std::string exit ("EXIT");
	std::string str;

	std::cin >> str;
	C_PhoneBook pb (1);
	while (str.compare("\0") != 0)
	{
		if (str.compare(add) == 0)
		{	
			pb.add_index(i);
			if (i < 7)
				i++;
			else
				i = 0;
		}
		else if (str.compare(search) == 0)
		{	
			if (i != 0)
				pb.print_phonebook(i - 1);
			else
				pb.print_phonebook(7);
		}
		else if (str.compare(exit) == 0)
			return (0);
		std::cin >> str;
	}
}

