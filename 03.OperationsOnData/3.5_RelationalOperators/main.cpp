#include <iostream>

int main(){
    int numero1 {3};
    int numero2 {29};

    std::cout << "Numero 1 : " << numero1 << '\n';
    std::cout << "Numero 2 : " << numero2 << '\n';
    std::cout << '\n';

    std::cout << std::boolalpha; //usado para mostrar true ou false no lugar de 1 e 2
    std::cout << "(numero1 < numero2) : " << ( numero1 < numero2 ) << '\n'; 
    std::cout << "(numero1 <= numero2) : " << ( numero1 <= numero2 ) << '\n'; 
    std::cout << "(numero1 > numero2) : " << ( numero1 > numero2 ) << '\n'; 
    std::cout << "(numero1 >= numero2) : " << ( numero1 >= numero2 ) << '\n'; 
    std::cout << "(numero1 == numero2) : " << ( numero1 == numero2 ) << '\n'; 
    std::cout << "(numero1 != numero2) : " << ( numero1 != numero2 ) << '\n'; 

    bool result = (numero1 == numero2);
    std::cout << "Resultado da comparacao e : " << result << '\n';

    return 0;
}