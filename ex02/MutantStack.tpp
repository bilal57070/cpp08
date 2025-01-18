#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &cp) : std::stack<T>(cp){
    *this = cp;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const &cpi){
    std::stack<T>::operator=(cpi);
    return *this;
}

