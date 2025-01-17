#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>

template<typename T> class MutantStack : public std::stack{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack const &cp);
        MutantStack& operator=(MutantStack const &cpi);

        const MutantStack& top();
        bool empty() const;
        size_t size() const;
        void push(const T& value);
        void pop();
        T::iterator begin();
        //void print();



    private:
        T *tab;
        size_t _size;
};








#endif