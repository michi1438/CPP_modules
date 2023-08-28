// File.hpp

#ifndef __File_hpp__
# define __File_hpp__

# include <iostream>
# include <fstream>

class	File
{
	private:
		std::string		needle;
		std::string		needle_rep;
		std::fstream	new_fs;
	public:
		File	(const char *ofile, const char *needl, const char *needl_rep);
		void	Append(std::string str);
		void	Close(void);
};

#endif //__File_hpp__
