// phonebook.cpp main stuff

#include <iostream>
#include <string>
#include <cstring>
#include "PhoneBook.hpp"

int	main()
{
//	int	i (0);
	std::string add ("ADD");
	std::string search ("SEARCH");
	std::string exit ("EXIT");
	std::string str;

	std::cin >> str;
	while (str.compare("\0") != 0)
	{
		if (str.compare(add) == 0)
		{	
			C_PhoneBook pb;
		}
		else if (str.compare(search) == 0)
		{	
			pb.print_phonebook();
			std::cout << "output results of search\n";
		}
		else if (str.compare(exit) == 0)
			return (0);
		std::cin >> str;
	}
}

