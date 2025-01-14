#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T &contain, int f){
    typename T::iterator it;
    it = std::find(contain.begin(), contain.end(), f);
    if (it == contain.end())
        throw NothingException();
    return it;
}