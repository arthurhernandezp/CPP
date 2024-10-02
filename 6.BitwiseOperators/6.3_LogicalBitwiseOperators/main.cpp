#include <iostream>
#include <bitset>
#include <iomanip>

int main(){

    int tamanho_da_coluna {40}; //Usado para ter um output organizado
    unsigned char valor1{0x3};
    unsigned char valor2 {0x5};
    
    //Imprimir os valores na forma binaria usando std::biset<8bits>()
    std::cout << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "valor1 : " << std::setw(tamanho_da_coluna) << std::bitset<8>(valor1) << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "valor2 : " << std::setw(tamanho_da_coluna) << std::bitset<8>(valor2) << '\n';

    //AND ( & )
    std::cout << '\n';
    std::cout << "Bitwise AND : " << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "std::bitset<16>(valor1 & valor2) : " << std::setw(tamanho_da_coluna) << std::bitset<8>(valor1 & valor2) << '\n';

    //OR ( | )
    std::cout << '\n';
    std::cout << "Bitwise OR : " << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "std::bitset<8>(valor1 | valor2) : " << std::setw(tamanho_da_coluna) << std::bitset<8>(valor1 | valor2) << '\n';

    //NOT (~)
    //Todo bit é negado, ou seja se o bit estiver ligado (1) vai virar 0, e todo bit desligado (0) vai virar 1

    std::cout << '\n';
    std::cout << "Bitwise NOT : " << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "std::bitset<8>(~valor1) : " << std::setw(tamanho_da_coluna) << std::bitset<8>(~valor1) << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "std::bitset<8>(~valor2) : " << std::setw(tamanho_da_coluna) << std::bitset<8>(~valor2) << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "~00101101 : " << std::setw(tamanho_da_coluna) << std::bitset<8>(~0b00101101) << '\n';

    //XOR ( ^ )
    std::cout << '\n';
    std::cout << "Bitwise XOR : " << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "std::bitset<8>(valor1 ^ valor2) : " << std::setw(tamanho_da_coluna) << std::bitset<8>(valor1 ^ valor2) << '\n';

    return 0;
}