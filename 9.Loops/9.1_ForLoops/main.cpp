#include <iostream>
#include <limits>

int main(){
    //size_t : representação de um unsigned long long int 
    const size_t COUNT {10};
    std::cout << "sizeof(size_t): " << sizeof(size_t)  << " bytes" << '\n';
    std::cout << "O limite min da variavel do tipo size_t e : " <<  std::numeric_limits<size_t>::min() << '\n';
    std::cout << "O limite max da variavel do tipo size_t e : " <<  std::numeric_limits<size_t>::max() << '\n';
    std::cout << "O limite lowest da variavel do tipo size_t e : " <<  std::numeric_limits<size_t>::lowest() << '\n';
    
    for( size_t i {0}; i < COUNT; ++i){
        std::cout << "Testando loop em C++, " << " rodada " << i << '\n';
    }

    //std::cout << "O valor de i e : " << i << '\n'; # "i" está fora do scopo, vai gerar error na compilação
    
    //Segunda forma de fazer o loop
    size_t i {0};
    for( ; i < COUNT; ++i){
        std::cout << "Testando loop em C++, " << " rodada " << i << '\n';
    }

    return 0;
}