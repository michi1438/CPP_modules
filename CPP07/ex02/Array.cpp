//to change back to .tpp
#ifndef __Array_tpp__
# define __Array_tpp__

//cdco
template <typename T>
Array<T>::Array(void) : tab(NULL), tab_size(0)
{
//	std::cout << "Array<T> constructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n_elem) : tab(new T[n_elem]), tab_size(n_elem) {}

template <typename T>
Array<T>::Array(const Array& o)
{
	*this = o;
}

template <typename T>
T& Array<T>::operator[](const size_t ind)
{
	try
	{
	if (ind >= this->tab_size)
		throw OutOfBoundException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
	return (tab[ind]);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& o)
{
	unsigned int i = 0;
	
	this->tab = new T[o.tab_size];
	this->tab_size = o.tab_size;	
	while (i < o.tab_size)
	{
		this->tab[i] = o.tab[i];
		i++;
	}
	return *this;
}

template <typename T>
Array<T>::~Array(void) 
{
}

//member func

template <typename T>
size_t Array<T>::size(void) const
{
	return (static_cast<size_t>(this->tab_size));
}

//other

template <typename T>
const char *Array<T>::OutOfBoundException::what() const throw()
{
	return ("Index is out of range of the array");
}

// Insertion

/*
template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& other)
{
	size_t i = 0;

	while (i < other.size())
		os << other.tab[i++];
	os << std::endl;
	return os;
}
*/

#endif
