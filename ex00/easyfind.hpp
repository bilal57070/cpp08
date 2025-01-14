#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class NothingException : public std::exception{
    public:
        const char* what() const throw(){
            return ("not found");
        }
};

template <typename T>
typename T::iterator easyfind(T &contain, int f);

# include "easyfind.tpp"





#endif