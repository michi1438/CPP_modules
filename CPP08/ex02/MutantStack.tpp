//MutantStack.tpp - ex02 - Cpp08

#ifndef __MutantStack_tpp__
# define __MutantStack_tpp__

//Destructor

~MutantStack()
{}

MutantStack() : std::stack<T, Container>()
{}

//MutantStack(const MutantStack<T, Container>& o) : std::stack<T, Container>(o)
//{}		

//iterators

iterator begin()
{
	return std::stack<T, Container>::c.begin();
}
	
iterator end()
{
	return std::stack<T, Container>::c.end();
}

#endif
