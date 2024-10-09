#include <iostream>
#include <bitset> //Usado para trabalhar com a base binaria

int main(){
    
    unsigned short int dado {15};
    std::cout << "dado (std::dec) : " << std::showbase << std::dec << dado << '\n';
    std::cout << "dado (std::oct) : " << std::showbase << std::oct << dado << '\n';
    std::cout << "dado (std::hex) : " << std::showbase << std::hex << dado << '\n';
    std::cout << "dado (std::bin) : " << std::bitset<16>(dado) << '\n';

    return 0;
}