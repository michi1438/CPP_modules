//MutantStack.tpp - ex02 - Cpp08

#ifndef __MutantStack_tpp__
# define __MutantStack_tpp__

//cdco

~MutantStack()
{}

MutantStack() : std::stack<T, Container>()
{}

MutantStack(const MutantStack<T, Container>& o) : std::stack<T, Container>(o)
{}		

MutantStack<T, Container>& operator=(const MutantStack<T, Container>& o)
{
	std::stack<T, Container>::operator=(o);
	return *this;
}

//iterators

typename Container::iterator begin()
{
	return std::stack<T, Container>::c.begin();
}
	
typename Container::iterator end()
{
	return std::stack<T, Container>::c.end();
}

typename Container::const_iterator begin() const
{
	return std::stack<T, Container>::c.begin();
}
	
typename Container::const_iterator end() const
{
	return std::stack<T, Container>::c.end();
}

#endif
