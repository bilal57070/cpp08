#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){
    tab = new T[0];
    _size = 0;
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &cp){
    *this = cp;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const &cpi){
    _size = cpi._size;
    tab = new T(cpi._size);
    for (int i = 0; i < _size; i++)
        tab[i] = cpi.tab[i];
    return *this;
}

template<typename T>
size_t  MutantStack<T>::size() const{
    return (_size);
}

template<typename T>
const MutantStack<T>&   MutantStack<T>::top(){
    return (tab[_size]);
}

template<typename T>
bool    MutantStack<T>::empty() const{
    if (_size == 0)
        return true;
    else
        return false;
}

template<typename T>
void    MutantStack<T>::pop(){
    delete tab[_size];
}

template<typename T>
void    MutantStack<T>::push(const T& v){
    tab[_size] = new T[];
    tab[_size] = v;
    _size++;
}