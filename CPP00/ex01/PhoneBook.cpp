// class PhoneBook.cpp
#include "PhoneBook.hpp"

int	C_PhoneBook::add_index(int i)
{
	std::cout << "Enter first_name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (getline_wrapper(&repertoir[i].first_name, i) == 1)
		return (1);
	std::cout << "Enter last_name: ";
	if (getline_wrapper(&repertoir[i].last_name, i) == 1)
		return (1);
	std::cout << "Enter nickname: ";
	if (getline_wrapper(&repertoir[i].nickname, i) == 1)
		return (1);
	std::cout << "Enter phone_number: ";
	if (getline_wrapper(&repertoir[i].phone_number, i) == 1)
		return (1);
	std::cout << "Enter darkest_secret: ";
	if (getline_wrapper(&repertoir[i].darkest_secret, i) == 1)
		return (1);
	i++;
	return (0);
}

int	C_PhoneBook::getline_wrapper(std::string *str, int i)
{
	std::getline(std::cin, *str, '\n');
	if (str->compare("\0") == 0)
	{
		repertoir[i].first_name = "\0";
		std::cout << "ERROR: phonebook fields can't stay empty\n";
		return (1);
	}
	return (0);	
}

int	C_PhoneBook::print_phonebook(int i)
{
	int	y (0);

	while(y < 8)
	{
		e[y] = i;
		if (repertoir[i].first_name != "\0")
		{
			std::cout << truncate(repertoir[i].first_name) << "|";
			std::cout << truncate(repertoir[i].last_name) << "|";
			std::cout << truncate(repertoir[i].nickname) << "|";
			std::cout << truncate(repertoir[i].phone_number) << "|";
			std::cout << "--> " << y + 1 << std::endl;
		}
		if (i != 0)
			i--;
		else
			i = 7;
		y++;
	}
	return (0);
}

int	C_PhoneBook::print_contact(int i)
{
	if (repertoir[i].first_name != "\0")
	{
		std::cout << repertoir[i].first_name << std::endl;
		std::cout << repertoir[i].last_name << std::endl; 
		std::cout << repertoir[i].nickname << std::endl;
		std::cout << repertoir[i].phone_number << std::endl;
		std::cout << repertoir[i].darkest_secret << std::endl; 
	}
	return (0);
}

void	C_PhoneBook::choose_contact(std::string str)
{
	std::cout << "Choose an index: ";
	std::cin >> str;
	int y (0);
	int input;

	input = atoi(str.c_str());
	if (input > 0 && input < 9 && str.size() == 1)
	{
		while (y < 9)
		{
			if (input == y)
				print_contact(e[input - 1]);
			y++;
		}
	}
	else
		std::cout << "ERR: value is out of range." << std::endl;
}
