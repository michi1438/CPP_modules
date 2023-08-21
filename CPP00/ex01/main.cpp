// phonebook.cpp main stuff

#include "utils.hpp"

int			add_contact(C_PhoneBook *pb, int i);

int	main()
{
	int	i (0);
	std::string add ("ADD");
	std::string search ("SEARCH");
	std::string exit ("EXIT");
	std::string str;

	std::cin >> str;
	C_PhoneBook pb;
	while (str.compare("\0") != 0)
	{
		if (str.compare(add) == 0)
			i = add_contact(&pb, i);
		else if (str.compare(search) == 0)
		{	
			if (i != 0)
				pb.print_phonebook(i - 1);
			else
				pb.print_phonebook(7);
			pb.choose_contact(str); 
		}
		else if (str.compare(exit) == 0)
			return (0);
		std::cin >> str;
	}
}

int	add_contact(C_PhoneBook *pb, int i)
{
	if (pb->add_index(i) != 1)
	{
		if (i < 7)
			i++;
		else
			i = 0;
	}
	return (i);
}

std::string	truncate(std::string str)
{
	size_t strlen (str.size());

	if (strlen > 10)
	{
		str = str.substr(0, 9);
		str.push_back('.');
	}
	else
		str.insert(0, 10 - strlen, ' ');
	return (str);
}
