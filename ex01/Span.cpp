#include "Span.hpp"

Span::Span(){
    N = 5;
}

Span::Span(int N){
    this->N = N;
}

Span::~Span(){}

Span::Span(Span const &cp){
    *this = cp;
}

Span&   Span::operator=(Span const &cpi){
    this->N = cpi.N;
    this->t = cpi.t;
    return (*this);
}

void    Span::addNumber(int n){
    if (t.size() == N)
        throw FilledContainerException();
    t.push_back(n);
}

int     Span::shortestSpan(){
    if (t.empty() || t.size() == 1)
        throw NotEnoughNumberException();
    std::vector<int> cp = t;
    std::sort(cp.begin(), cp.end());
    int res = *(cp.end() - 1) - *(cp.begin());
    for (std::vector<int>::iterator it = cp.begin(); it != cp.end(); ++it){
        if (res > (*it - *(it - 1)))
            res = (*it - *(it - 1));
    }
    return res;
}

int     Span::longestSpan(){
    if (t.empty() || t.size() == 1)
        throw NotEnoughNumberException();
    std::vector<int> cp = t;
    std::sort(cp.begin(), cp.end());
    int res = *(cp.end() - 1) - *(cp.begin());
    return res;
}

void    Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end){
    while (start++ < end && start != t.end()){
        t.push_back(*start);
    }
}

const char *NotEnoughNumberException::what() const throw(){
    return ("not enough number in the containeur");
}

const char *FilledContainerException::what() const throw(){
    return ("containeur already filled");
}