// easyfind.tpp - ex00 - CPP08

#include "easyfind.hpp"

class ValueNotFoundExcept : public std::exception
{
	const char *what() const throw()
	{
		return ("Value was not found !");
	}
};

template <typename T>
int easyfind(T &lst, int needle)
{
	typename T::const_iterator i = std::find(lst.begin(), lst.end(), needle);
	if (i == lst.end())
		throw ValueNotFoundExcept();
	return *i;
}
