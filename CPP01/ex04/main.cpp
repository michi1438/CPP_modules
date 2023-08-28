// main.cpp - Sed2

#include "File.hpp"

int	main(int ac, char **av)
{
//	int i (0);

	if ( ac != 4)
	{
		std::cout << "you must input 3 args..." << std::endl;
		return (1);
	}
	std::ifstream	fs;
	std::string		str;

	File NewFile (av[1], av[2], av[3]);
	fs.open (av[1], std::fstream::out);
	std::getline (fs, str);
	while (!fs.eof())
	{
		NewFile.Append(str);
		std::getline (fs, str);
	}
	NewFile.Close();
	return (0);
}
