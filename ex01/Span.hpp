#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span{
    public:
        Span();
        ~Span();
        Span(int N);
        Span(Span const &cp);
        Span& operator=(Span const &cpi);

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
    
    private:
        unsigned int N;
        std::vector<int> t;
};

class FilledContainerException : public std::exception{
    public:
        const char* what() const throw();
};

class NotEnoughNumberException : public std::exception{
    public:
        const char* what() const throw();
};


#endif