#include "easyfind.hpp"

int main(){
    std::vector<int> tab;
    for (int i = 0; i <= 20; i++)
        tab.push_back(i);
    try{
        std::cout << *easyfind(tab, 5) << std::endl;
        std::cout << *easyfind(tab, 20) << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
        try{
        std::cout << *easyfind(tab, 74) << std::endl;
        std::cout << *easyfind(tab, 20) << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}