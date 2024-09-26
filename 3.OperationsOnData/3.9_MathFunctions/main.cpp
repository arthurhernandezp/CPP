//https://en.cppreference.com/w/cpp/header/cmath
#include <iostream>
#include <cmath>

int main(){
    //std::floor(double) e  std::ceil(double)
    double n1{7.7};
    //floor
    std::cout << "Arredondando para floor e : " << std::floor(n1) << '\n';
    std::cout << "Arredondando para ceil e : " << std::ceil(n1) << '\n';

    //std::abs()

    double n2 {-5000};

    std::cout << "Abs de n1 com (std::abs(n1)) : " << std::abs(n1) << '\n';
    std::cout << "Abs de n2 com (std::abs(n2)) : " << std::abs(n2) << '\n';

    //std::exp()
    //e ^ 10 
    double exponencial = std::exp(10);
    std::cout << "O exponencial de 10 ( e ^ 10 ) : " << exponencial << '\n';

    //std::pow(x,y)
    // (x ^ y)
    std::cout << "(2 ^ 10) = " << std::pow(2,10) << '\n';
    std::cout << "(2 ^ 12) = " << std::pow(2,12) << '\n';

    //log: reverso da pow então se 2^3=8, log de 8 na base 2 será 3
    std::cout << "Se e^4=54.59, entao log de 54.59 na base e sera: " << std::ceil(std::log(54.59)) << '\n';

    std::cout << "Se 10^4 = 10000, usando std::log10(10000) sera igual a : " << std::log10(10000) << '\n';

    //std::sqrt(double)
    std::cout << "O raiz quadrada de 81 e: " << std::sqrt(81) << '\n';

    //std::round(double)
    //Se a parte decimal for entre 0 e 4 pro exemplo de 2.0 a 2.4 será arredondado para 2 para baixo
    //Se a parte decimal for entre 5 e 9 por exemplo de 2.5 a 2.9 será arredendoda para 3 para cima

    std::cout << "2.7 arredondado e: " << std::round(2.7) << '\n';
    std::cout << "4.2 arrendoda e : " << std::round(4.2) << '\n';
    
    return 0;
}