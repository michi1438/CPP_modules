// main.cpp - BONJOUR ICI LE CERVEAU

#include <iostream>
#include <string>

int main(void)
{
	std::string str ("HI THIS IS BRAIN\n");
	std::cout << static_cast<void*>(&str[0]) << std::endl;
	std::string *stringPTR = new std::string;
	*stringPTR = str;
	std::cout << stringPTR << std::endl;
	std::string *stringREF (&str);
	std::cout << stringREF << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << *stringREF << std::endl;
}

