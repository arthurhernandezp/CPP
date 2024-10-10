#include <iostream>

int main(){
    
    int elementos[] {1,2,3,4,5,6,7,8};

    std::cout << "Quantidade de bytes do array elementos : " << sizeof(elementos) << '\n';
    std::cout << "Quantidade de bytes de 1 elemento do array : " << sizeof(elementos[0]) << '\n';

    std::cout << "Quantidade de elementos usando sizeof(elementos)/sizeof(elementos[0]) : " << sizeof(elementos)/sizeof(elementos[0]) << '\n';
    std::cout << "Quantidade de elementos usando std::size(elementos) : " << std::size(elementos) << '\n';

    for( size_t i {0} ; i < std::size(elementos) ; ++i ){
        std::cout << "elementos[" << i << "] : " << elementos[i] << '\n';
    }
    
    std::cout << "For range based loop" << '\n';

    for( size_t i {0} ; auto & e : elementos ){
        std::cout << "elementos[" << i << "] : " << e << '\n';
    }

    return 0;
}