#include "Span.hpp"
#include <cstdlib>

int main(){
    Span sp = Span(100);
    std::vector<int> m;

    //std::srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		
		//int random_int = rand() % 1000000;
		m.push_back(i);
	}
    try{
        sp.addNumber(m.begin(), m.end());
        //sp.addNumber(6);
        //sp.addNumber(3);
        //sp.addNumber(17);
        //sp.addNumber(9);
        //sp.addNumber(11);
        //sp.addNumber(25);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const NotEnoughNumberException& e){
        std::cout << e.what() << std::endl;
    }
    catch (const FilledContainerException& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}