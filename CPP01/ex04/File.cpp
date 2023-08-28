// File.cpp

#include "File.hpp"

File::File (const char *ofile, const char *needl, const char *needl_rep)
{
	needle = needl;
	needle_rep = needl_rep;
	std::string nstr(ofile);
	new_fs.open ((nstr.append(".replace").c_str()), std::fstream::out);
}

void	File::Append(std::string nstr)
{
	std::size_t found;
	found = nstr.find(needle);
	while (found != std::string::npos)
	{
		nstr.erase(found, needle.size());
		nstr.insert(found, needle_rep);
		found = nstr.find(needle, found + 1);
	}
	new_fs << nstr.c_str() << std::endl; 
}

void	File::Close(void)
{
	new_fs.close();
}
