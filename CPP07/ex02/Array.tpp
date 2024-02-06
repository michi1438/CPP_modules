#ifndef __Array_tpp__
# define __Array_tpp__

template <typename T>
Array<T>::Array(void) : tab(NULL), tab_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n_elem) : tab_size(n_elem), tab(new T[n_elem]) {}

template <typename T>
Array<T>::~Array(void) {}

#endif
